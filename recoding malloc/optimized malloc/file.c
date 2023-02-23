#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include "malloc.h"

int main(void)
{
    struct stat* statbuf;
    size_t size;
    char *contents;
    int fd;

    fd = open("special.txt", O_RDONLY);// open returns a file descriptor
    fstat(fd, &statbuf); // gets file status
    size = statbuf->st_size;// st_size returns Size of file, in bytes.
    contents = my_malloc(size + 1);
    read(fd, contents, size);
    contents[size] = '\0';
    printf("%s\n", contents);
}