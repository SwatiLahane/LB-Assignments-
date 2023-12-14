
////Write a program which accept file name from user and count number of Small characters from that file 

//Input: Demo.txt
//Output: Number of Small characters are 21
  



  #include<stdio.h>
  #include<stdlib.h>
  #include<unistd.h>
  #include<fcntl.h>
  #include<string.h>
  #include<io.h>


  #define BUFFERSIZE 1024


 int CountSmall(char FName[])
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
               if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
               {
                  iCount++;
               }
           }
           
       }

            close(fd);  
            printf("File gets successfully closed.\n"); 
           
           return iCount;
     }

     
   }  

  int main()
  {  

     char FileName[30];
    
     int iRet =0;
    
     
     printf("Enter the file name");
     scanf("%s",FileName);
     
     iRet = CountSmall(FileName);
     
     printf("Number of Small characters are :%d",iRet);

     
     
    return 0;

  } 


//perform  all oprations in CountSmall function

//Open file in read mode 
//read the data into loacal Array
//Count small character
//close the file
//return its frequency 