

//PRoblem Statement :Write a program which accept distance in kilometer and convert it into meter (i kilometer  = 1000 meter)
//(formula : Meter = value of km x 1000 m)

#include<stdio.h>

int KMtoMeter(int iKM )
{
   auto int iMeter = 1000;
    int distance = iKM  * 1000 ;

   return distance;
}

int main()
{
   auto int iValue = 0;
   auto int iRet   = 0; 

   printf("Enter Distance:");
   scanf("%d",&iValue);
  
  iRet = KMtoMeter(iValue);  //Function Calll

 printf("Distan in kilometer to meter is : %d",iRet);

    return 0;
}
//Step :Test cases 
/*
  Input : 5  
  output :5000

  Input :12
  Output :12000

  

*/
