Practical-5
Surya Prakash Reddy
2520030145
S-7



For this experiment, I implemented a producer-consumer communication model using anonymous pipes, where the parent process acted as the data producer and the child process functioned as the consumer. By establishing a unidirectional byte stream via the `pipe()` system call, the parent efficiently transferred blocks of data to the child. To evaluate communication efficiency, I measured the transfer rate and throughput by tracking the time taken to stream data blocks. The results demonstrated that anonymous pipes provide a lightweight and fast IPC mechanism for related processes, though they require careful management and closing of unused file descriptors to prevent deadlocks.

To expand on pipe-based redirection, I developed a C program that programmatically replicates the shell pipeline `ls -l | grep ".c"`. This required orchestrating multiple system calls: `pipe()` to set up the communication channel, `fork()` to create concurrent worker processes, and `dup2()` to seamlessly redirect the standard output of the `ls` process to the pipe's write-end, and the standard input of the `grep` process to the pipe's read-end. Finally, replacing the process images using the `exec()` family allowed both commands to execute independently while passing data natively through the kernel pipe buffer.

Running the pipeline program successfully filtered the current directory contents to display only the C source files, matching the exact output of the native shell command. This experiment provided practical insights into how modern shells handle command redirection and inter-process data flow at the operating system level, reinforcing the critical role of file descriptor manipulation (`STDIN_FILENO` and `STDOUT_FILENO`) in building functional process pipelines.