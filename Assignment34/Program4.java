
//3. Write a program which accept number from user and return the Multiplication of all the digit
import java.util.*;

class Program4
    
{ 
   public static int Mutiply(int iNo)
   {
         int iDigit = 0;
         int iMult = 1;

         while(iNo != 0)
         {
            iDigit = iNo % 10;

             if(iDigit == 0) //updator for zero
             {
                iDigit = 1; 
             }

            iMult = iMult *iDigit;
             iNo = iNo /10;
             
         }
         return iMult;
   } 

   public static void main(String Args[])
   {
       Scanner sobj = new Scanner(System.in);
       int iValue = 0;
       int iRet = 0;

       System.out.println("Enter Number:");
       iValue = sobj.nextInt();
       
       iRet = Mutiply(iValue);
       System.out.println(" "+iRet);

   }
}