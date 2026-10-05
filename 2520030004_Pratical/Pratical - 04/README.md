For this experiment, I implemented a multi-process C program to understand process creation and synchronization using fork(), wait(), and waitpid(). I created multiple child processes and observed how wait() makes the parent wait until any child process finishes, while waitpid() allows the parent to wait for a specific child process.

To understand zombie processes, I created a situation where the child processes finished before the parent collected their exit status. Using the ps command, I observed the terminated child processes in the process table with a Z state. This helped me understand why the parent should properly collect the exit status of child processes.

Finally, I modified the program to remove the zombie processes by using waitpid() with the WNOHANG option. This allowed the parent process to check the status of child processes without being blocked. After the child processes were properly reaped, the zombie entries were removed from the process table.
