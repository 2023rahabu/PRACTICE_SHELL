#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int n, fd;
    char buf[50];

    n = read(0, buf, 20);  // Read up to 20 bytes from standard input (stdin).

    if (n == -1) {
        perror("Error reading from stdin");
        return 1;
    }

    fd = open("text.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);

    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    int bytes_written = write(fd, buf, n);

    if (bytes_written == -1) {
        perror("Error writing to file");
        return 1;
    }

    close(fd); // Don't forget to close the file.

    return 0;
}

