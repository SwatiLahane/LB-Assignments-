//4.Prbolem statement :Accept N numbers from user and display all such elements which are divisible by 3 and divisible by 5
/*
Input : 6
       Element : 85 66 3 80 93 88

Ouput : 85 80  

Input :4 
Element  : 15 14 30 33
Output :   15 30
*/
#include<stdio.h> // printf and scanf
#include<stdlib.h>//For malloc and free

void Display(int Arr[] ,int iLength)
{
    register int iCnt = 0; 
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 3 == 0 && Arr[iCnt] % 5 == 0)
        {
            printf("%d\t\n",Arr[iCnt]);
        
        }
    }
    
}


int main()

{

 register int iCnt = 0;
 auto int iSize = 0;
 auto int *p = NULL;  

 
  
 printf("Enter Number of elements :\n");
 scanf("%d",&iSize);

 p = (int *) malloc(iSize * sizeof(int)); //malloc call

 printf("Dynamic memory gets allocated sucessfully for %d Elements\n",iSize); 

 if(p == NULL)
{
    printf("Unable to allocate Memory ");
    return -1;
}

 printf("Enter %d elements " ,iSize);

 for (iCnt =0; iCnt < iSize; iCnt++)
 {
     printf("\nEnter Element %d :",iCnt + 1 );
     scanf("%d", &p[iCnt]);
 }
 Display(p,iSize); //Function Call

 free(p);//
 printf("Dynamic memory gets deallocated sucessfully......\n");
    return 0;

}