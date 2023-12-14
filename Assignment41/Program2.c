//1.Wrrite a pplication which accept file name from user and create that file in read mode.

//Input: Demo.txt
//Output: File created successfully

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

 
int main()
{
   int fd =0;
   char FileName[30];

   printf("Enter the name of filr that you want to open from current directory\n");
   scanf("%s",FileName);

   fd = creat("Demo1.txt", 07777);

   if(fd == -1)
   {
       printf("Unable to create file\n",FileName);

   }
   else
   {
       printf("File created Successfully ");
   }
   

    return 0;
}