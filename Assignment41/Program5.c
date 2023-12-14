//5.write application which accept file name from user and one string from user 
//.write that string at the end of the file

//Input :  Demo.txt
          //Hello World
//Output:write Hello world at the end of Demo.txt file



#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};
    int fd =0 ,iRet =0;
  
    printf("Enter the name of file that you want to open from current directory\n"); 
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR | O_APPEND);
    
    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }
   else
   {
       printf("%s gets opened successfully with file descriptor %d\n",FileName,fd);
       
       printf("Enter the data that you want to write into file : \n");
       scanf(" %[^'\n']s",Arr);

        iRet = write(fd,Arr,strlen(Arr)); 

      

       close(fd);
   }
      
    return 0;
    
}