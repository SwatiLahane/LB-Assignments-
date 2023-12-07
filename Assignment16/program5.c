
//5 .Accept N Numbers from user and display summation of digits of each number 

#include<stdio.h>
#include<stdlib.h>

    void Display(int Arr[] , int iLength)
       {
              int iCnt = 0; 
              
              int iDigit = 0,sum =0;

             for(iCnt =0 ; iCnt < iLength; iCnt++)
             {
                while(Arr[iCnt] > 0)
                {
                       iDigit = Arr[iCnt] % 10; 
                  
                         sum = iDigit + sum;
                          
                               
                         Arr[iCnt] = Arr[iCnt] / 10;
                         

                }
                  
                     printf("%d\t" ,sum);     
                  
                  
                 }

                 
                  
             }

             
       

        

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        //                         Entry Point function from where execution gets started
        // 
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
        int main()

        {

        auto int iSize = 0 , iCnt = 0 ,iRet = 0;
        auto int iValue = 0;
        auto int *p = NULL;

        
        printf("Enter Number of element :");
        scanf("%d",&iSize);

    
            p = (int *)malloc(iSize * sizeof(int));
            printf("Dynamic memory allocated successfully for %d elements\n",iSize);

            if(p==NULL)
        {
            printf("Unable to Allocate the memeory");
            return -1;
        }

            printf("ENter %d Elements\n",iSize);
            for(iCnt = 0; iCnt < iSize; iCnt ++)
        {
            printf("Enter elements %d :",iCnt + 1);
            scanf("%d",&p[iCnt]);
        }

            Display(p,iSize);  //Function call
            

            free(p); //Deallocated dynamic memory
            printf("Dynamic memory gets deallocated successfully.......");
            return 0;
        }