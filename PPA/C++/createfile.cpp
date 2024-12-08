#include<stdio.h>  // 
#include<fcntl.h>  // open close file 
#include<unistd.h>  // universal standards



int main()
{
    int fd = 0;


    fd = creat("marvellous.txt",0777);

    if(fd != -1)
    {
        printf("file created successfully %d",fd);
    }
}