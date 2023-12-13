

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


class Program1
{
    public static int CountEven(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;
          
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iCount++;
            }
            iNo = iNo / 10;
            
           
        }
        return iCount;
    }
    

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();
        
        iRet = CountEven(iValue);
        System.out.println("Even Count is : "+iRet);
    }
}
