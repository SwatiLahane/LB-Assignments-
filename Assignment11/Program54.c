
#include<stdio.h> //for printf and scanf
#include<stdlib> //For malloc and free

int main()

{
   auto int iCount = 0;
   int *ptr = NULL;
   int icnt = 0;
   printf("Enter the Number of element :\n");
   scanf("%d",&iCount);

  ptr = (int *)malloc(iCount * sizeof(int)); 

  printf("Enter the elements : \n");
  
  for(icnt = 0 ; icnt < iCount; icnt++)
  {
      scanf("%d", &ptr[icnt]);
  }
  


    return 0;
}