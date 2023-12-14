//1.Wrrite a pplication which accept file name from user and and display size of file.
//Input Demo.txt 
//Output : File size is 56 bytes

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

 #define BUFFERSIZE 1024
int main()
{
   int fd =0;
   char FileName[30];
   char Arr[100] = {'\0'};
   int iSize =0, iRet =0;

   printf("Enter the name of file that you want to open from current directory\n");
   scanf("%s",FileName);

   fd = open(FileName, O_RDWR);

   if(fd == -1)
   {
       printf("Unable to create file\n",FileName);

   }
   else
   {
      while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
       {
           iSize = iSize + iRet;
       }
       printf("File size is %d bytes\n",iSize);
       close(fd);
   }
   

    return 0;
}