
//1.Wrrite a pplication which accept file name from user and open that file in read mode.

//Input :Demo.txt
//Output : File Opened Successfully

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>



#define BUFFERSIZE 1024

int main()
{
  char FileName[30];
  

  int fd =0 ,iRet = 0;

  printf("ENter the name of file that you want to open from current directly\n");
  scanf("%s",FileName);

  fd = open(FileName, O_RDWR);
  
  if(fd == -1)
  {
      printf("Unable to open %s file\n",FileName);
  }
  else

  {
      printf("File Opened Successfully\n");
      close(fd);
  }

  return 0;
}