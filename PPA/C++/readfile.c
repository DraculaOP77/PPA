#include<stdio.h>  // 
#include<fcntl.h>  // open close file 
#include<unistd.h>  // universal standards



int main()
{
    int fd = 0;
    char arr[20];
    int ret = 0;


    fd = creat("marvellous.txt",O_RDWR);

   ret = read(fd,arr,10); //(KASHYATUN WACHAICHA, KASHYAT VACHAICHA , KITI WACHAICHA)
 printf("%d bytes gets written in filec\n",ret);

 print("data is : %s \n",arr);
 
    close(fd);

    return 0;
}