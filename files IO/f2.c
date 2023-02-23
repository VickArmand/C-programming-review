#include <unistd.h>
#include <fcntl.h>  

int main()
{
    int fd_to_read = open("sometext.txt",O_RDONLY);
    int fd_to_write = open("newtext.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    // open is a system call which is slower since it reads one char at a time
    if (fd_to_read == -1 || fd_to_write == -1)
    {
        printf("Error\n");
        return -1;
    }

    char c; 
    int bytes;
    while((bytes = read(fd_to_read, &c, sizeof(c))) > 0)
    {
        if (c == '.')
        {
            c = '!';
        }
        write(fd_to_write, &c, sizeof(c));
    }
    close(fd_to_read);
    close(fd_to_write);
}