#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20
int main()
{
   char *str;
   str = (char *) malloc (SIZE * sizeof(char));
   int n;
   int fd;
   //  printf("closed the fd.\n");
   fd = open("program.txt", O_RDWR);
   printf("Enter text to write in the file :\n");
   write(fd, str, n);
  // lseek(fd, SIZE, SEEK_CUR);
   n = read(0, str, SIZE);
   write(1, str, n);
   printf("opened the fd = %d\n", fd);
   close(fd);
   return 0;
}
