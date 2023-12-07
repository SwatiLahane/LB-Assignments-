

   //Write a program Which accept number and count frequency of 2 in it

      #include<stdio.h>

         
         

         int CountTwo(int iNo,int Digit)

         {

         int count =0;
         int  iDigit = 0;
         while(iNo > 0 )
         {
            iDigit = iNo % 10;

            if(Digit == iDigit)
            {
               count++;
             
            }
             iNo = iNo / 10;

            
           
         }
         return count;
         }
         
            
         
         

         int main()
         {
         auto int iValue = 0;
         int Digit = 0;
         int  bRet = 0;

         printf("Enter Number:\n");
         scanf("%d" ,&iValue);

         printf("Enter Digit: ");
         scanf("%d",&Digit);

        bRet =  CountTwo(iValue,Digit);//Function call    
      
        printf("frequency is %d",bRet);
            return 0;
         }
