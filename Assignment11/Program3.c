

   //Write a program Which accept  number and count frequency of 2 in it

      #include<stdio.h>

         
         

         int CountTwo(int iNo)

         {

         int count =0;
         int  iDigit = 0;
         while(iNo > 0 )
         {
            iDigit = iNo % 10;

            if(iDigit == 2)
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
         auto int  Digit = 0;
         auto int  bRet = 0;

         printf("Enter Number:\n");
         scanf("%d" ,&iValue);

   
        bRet =  CountTwo(iValue);//Function call    
      
        printf("frequency is %d",bRet);
            return 0;

         }
 //TEst steps 
 /*
   Input : 2395
   Output:1

 Input :1018
 Output:0

 Input :90000
 output:0

 Input :922432
 Output:3

 */