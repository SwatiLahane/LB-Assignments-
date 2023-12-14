

//Write a program which accept file name from user and count number of Capital characters from that file 

//Input: Demo.txt
//Output: Number of Capital characters are 23
  
  #include<stdio.h>
  #include<stdlib.h>
  #include<unistd.h>
  #include<fcntl.h>
  #include<string.h>
  //#include<io.h>


  #define BUFFERSIZE 1024


 int CountCapital(char FName[])
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
               if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
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
     
     int fd1 =0;
     int iRet =0;
    
     
     printf("Enter the file name\n");
     scanf("%s",FileName);
     
     iRet = CountCapital(FileName);
     
     printf("Number of Capital characters are :%d\n",iRet);

       
     
    return 0;
  } 
