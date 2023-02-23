#include <stdio.h>
#include <sys/types.h>                                                                                                           
#include <sys/stat.h>                                                                                                   
#include <fcntl.h>  
#include <unistd.h>
#include <stdlib.h>
int main()
{
    int fd;
    char buf[14];
    fd = open("myfile.txt",O_CREAT | O_WRONLY, 0600);
    // Returns a file descriptor(an integer)
    if(fd == -1)
    {
        printf("Failed to create and open file");
        exit(1);
    }
    write(fd,"Hello World\n", 13);
    close(fd);
    fd = open("myfile.txt", O_RDONLY);
    if(fd == -1)
    {
        printf("Failed to create and open file");
        exit(1);
    }
    read(fd,buf,13);
    buf[13] = '\0';
    close(fd);
    printf("%i\n",fd);
    printf("%s\n",buf);
    return 0;
}