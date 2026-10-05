Practical-5
2520030004
Vedhanth Sinde
S-7

For this experiment, I implemented a Producer-Consumer C program using the pipe() system call for communication between parent and child processes. The parent process works as the producer and writes five values into the pipe, while the child process works as the consumer and reads the values from the pipe.

The pipe provides a simple way for the two processes to communicate. The parent closes the read end because it only produces data, and the child closes the write end because it only consumes data. The producer sends the values 10, 20, 30, 40, and 50 through the pipe, and the consumer reads and displays them.

I also measured the time taken for the communication using clock() and calculated the communication efficiency based on the number of values transferred and the time taken. This experiment helped me understand inter-process communication using pipes and the Producer-Consumer concept.
