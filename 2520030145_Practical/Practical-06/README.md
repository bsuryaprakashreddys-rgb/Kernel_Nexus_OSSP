# OS Lab - Practical 06

## FIFO (Named Pipe)

FIFO is used for communication between two processes.

### Functions used

- `mkfifo()` - Creates a named pipe.
- `open()` - Opens the FIFO for reading or writing.
- `read()` - Reads data from the FIFO.
- `write()` - Writes data to the FIFO.
- `fork()` - Creates a child process.
- `unlink()` - Deletes the FIFO.

## POSIX Signals

Signals are used to send notifications to a process.

### Signals and functions

- `SIGINT` - Interrupt signal (Ctrl+C).
- `SIGTERM` - Used to terminate a process.
- `SIGUSR1` - User-defined signal.
- `signal()` - Used to handle a signal.
- `kill()` - Sends a signal to a process using PID.
- `Signal Handler` - Function which executes when a signal is received.

## Files

- `client.c`
- `server.c`
- `signal.c`
