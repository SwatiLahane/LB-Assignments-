
////Write a program which accept file name from user and one count from user
//and read that characters from starting position
//Input: Demo.txt  

//Output: Display first 12 characters from demo.txt
  



  #include<stdio.h>
  #include<stdlib.h>
  #include<unistd.h>
  #include<fcntl.h>
  #include<string.h>
  #include<io.h>


  #define BUFFERSIZE 1024


 int CountChar(char FName[],int iSize)
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
              {
                 printf("%s\n",Arr);    
              } 
       }

      
     }

       close(fd);  
       printf("File gets successfully closed.\n"); 
           
           
     }

     
   

  int main()
  {  

     char FileName[30];
    
     int iRet =0;
     char  iValue ='\0';
    
     
     printf("Enter the file name: \n");
     scanf("%s",FileName);
     
    
      printf("Enter the count: \n");
      scanf("%s",&iValue);
     

     iRet = CountChar(FileName,iValue);
     
     

     
     
    return 0;

  } 


//perform  all oprations in countwhite function

//Open file in read mode 
//read the Number of bytes  into loacal Array
//Display dtat on screen 
//close the file
