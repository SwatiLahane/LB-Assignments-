
//Problem Statement :Accept N Numbers from user and display all such elements which are multiples of 11
/*Input  :N : 6
 Element : 85 66 3 55 93 88 
 
 Output :66 55 88
 
*/
#include<stdio.h> // printf and scanf
#include<stdlib.h>//For malloc and free

void Display(int Arr[] ,int iLength)
{
    register int iCnt = 0; 
    int i =0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
       
        {   

        if(Arr[iCnt] % 11 == 0)
        {
          printf("%d\t\n",Arr[iCnt]);
        }
        
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