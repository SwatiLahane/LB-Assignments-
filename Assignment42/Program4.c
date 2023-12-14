
////Write a program which accept file name from user and one character from user
//and count number of Occurances of That file 
//Input: Demo.txt  'M'

//Output: Frequency of M is 7
  



  #include<stdio.h>
  #include<stdlib.h>
  #include<unistd.h>
  #include<fcntl.h>
  #include<string.h>
  #include<io.h>


  #define BUFFERSIZE 1024


 int CountChar(char FName[],char ch)
   {
     char Arr[BUFFERSIZE] = {'\0'};   
     int iCount =0; 
     int fd =0 ,iAns=0;
     int i =0;
    

    fd = open(FName, O_RDWR);
     
     if(fd == -1)
     {
         printf("Unabel to open %s file\n",FName);
     }

     else
     {
       printf("%s gets opened successfully with file descriptor %d\n",FName,fd);
       
       while((iAns = read(fd,Arr,sizeof(Arr))) != 0)
       {
           for(i = 0; i < iAns; i++)
           {
               if((Arr[i] == ch)) 
               {
                 ch++;
               }
           }
           
       }

            close(fd);  
            printf("File gets successfully closed.\n"); 
           
           return ch;
     }

     
   }  

  int main()
  {  

     char FileName[30];
    
     int iRet =0;
     char cValue = '\0';
     
     printf("Enter the file name: \n");
     scanf("%s",FileName);
     
    
      printf("Enter the character: \n");
      scanf("%c",&cValue);

     iRet = CountChar(FileName,cValue);
     
     printf("Frequecny of M is :%d",iRet);

     
     
    return 0;

  } 


//perform  all oprations in countwhite function

//Open file in read mode 
//read the data into loacal Array
//Count small character
//close the file
//return its frequency 