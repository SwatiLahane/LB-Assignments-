



//1.Write a java Program which accept number from user and return the count of Even Digits
/*
//Input 2395
//Output 1
 
Input 1018
Output 2

Input -1018
Output 2

Input 8462
Output 4

*/
import java.util.*;


class Program5
{
    public static int CountDiff(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;
        int iSum =0;
        int iSum1 = 0,iDiff =0;
          
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
               iSum = iSum + iDigit;
            }

          else if(iDigit % 2 != 0)
          {
               iSum1 = iSum1 + iDigit;
          }

            iNo = iNo / 10;
            iDiff = iSum - iSum1;
           
        }
        return iDiff;
    }
    

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();
        
        iRet = CountDiff(iValue);
        System.out.println("Summation of Even and Odd Count is : "+iRet);

    }
}
