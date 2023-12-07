
        //Write a program which accept number from user and check whether it contains zero or not


        #include<stdio.h>

        #define TRUE 1
        #define FALSE 0

        typedef int BOOL;

       
         
        BOOL ChkZero(int iNo)

        {
        int  iDigit = 0;
        
          if(iNo == 0 )

        {
           return TRUE;
        }
    
        while(iNo > 0)  
        {
           

           if(iNo % 10 == 0)

            {
             return 1;
            }
        
            
        iNo = iNo / 10;

        }


       return 0;

        }

      
        int main()
        {

        auto int iValue = 0;
        BOOL bRet = FALSE;

        printf("Enter Number:\n");
        scanf("%d" ,&iValue);

        bRet = ChkZero(iValue);//Function call    
    
        if(bRet == TRUE)
        {
            printf("It contains zero");

        }

        else

        {
                printf("there is no zero");
        }
           
           return 0;
        }
