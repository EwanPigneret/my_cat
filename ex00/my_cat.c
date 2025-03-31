#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1000000

int main (int argc, char **argv) {
    char buf[BUFFER_SIZE + 1];
    int filedescriptor;
    int nb_read;
    int result_close;
    
    int index = 1;
    while (argv[index] != NULL) {

        filedescriptor = open(argv[index], O_RDONLY);
        if (filedescriptor == -1) {
            printf("Opening error\n");
            return 1;
        }

        nb_read = -1;

        while (nb_read != 0) {
            nb_read = read(filedescriptor, buf, BUFFER_SIZE);
            if (nb_read == -1) {
                printf("Reading error\n");
                return 1;
            }

            buf[nb_read] = '\0';

            printf("%s", buf);
        }

        result_close = close(filedescriptor);
        if (result_close == -1) {
            printf("Closing error\n");
            return 1;
        }

        index += 1;
    }
    return 0;
}