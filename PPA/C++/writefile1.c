#include<stdio.h>  // 
#include<fcntl.h>  // open close file 
#include<unistd.h>  // universal standards
#include<string.h>


int main()
{
    int fd = 0;
    char arr[]= "Preplacement activity ";
    int ret = 0;


    fd = creat("marvellous.txt",O_RDWR | O_APPEND);

   ret = write(fd,arr,strlen(arr)); //(KASHYAT LIHAYCHA, KAI LIHAICHA , KITI LIHAICHA)
 printf("%d bytes gets written in filec\n",ret);
 
    close(fd);

    return 0;
}