
//3. Write a program which accept number from user and return the count of digits in between 3 and 7
import java.util.*;

class Program3
    
{ 
   public static int CountRange(int iNo)
   {
         int iDigit = 0;
         int iCount = 0;

         while(iNo != 0)
         {
            iDigit = iNo % 10;
            if((iDigit > 3 )&& (iDigit < 7))
            {
                iCount++;
            } 
            iNo = iNo /10;
         }
         return iCount;
   } 

   public static void main(String Args[])
   {
       Scanner sobj = new Scanner(System.in);
       int iValue = 0;
       int iRet = 0;

       System.out.println("Enter Number:");
       iValue = sobj.nextInt();
       
       iRet = CountRange(iValue);
       System.out.println(" "+iRet);

   }
}