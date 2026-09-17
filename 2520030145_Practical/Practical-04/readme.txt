Practical-4
2520030145
Surya Prakash Reddy
S-7

For this experiment, I implemented a multi-process C program to explore process creation and synchronization mechanisms using fork(), wait(), and waitpid(). By spawning multiple child processes, I observed how wait() blocks execution until any arbitrary child terminates, which provides basic synchronization but lacks targeted control. In contrast, waitpid() gave me precise oversight, allowing me to track specific child process IDs and manage non-blocking checks. Comparing the two highlighted that while wait() is simpler, waitpid() is essential for complex scenarios requiring deterministic orchestration of child lifecycles.

To investigate resource management, I intentionally created a scenario where child processes terminated before their parent collected their exit statuses, resulting in zombie processes. Inspecting the system process table via the ps command revealed these defunct entries lingering in a Z state, holding onto kernel process descriptors even though the tasks had finished executing. This demonstrated the importance of proper reaping, as accumulating zombie processes can eventually exhaust the system's available process identification slots.

Finally, I modified the program to eliminate these zombie processes by implementing proper synchronization loops using waitpid() with the WNOHANG option. This allowed the parent process to periodically check for and reap terminated children asynchronously without getting blocked. Re-inspecting the process table confirmed that all child resources were cleanly released upon completion, resulting in a stable and resource-efficient implementation.