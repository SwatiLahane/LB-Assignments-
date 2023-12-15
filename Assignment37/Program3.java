
import java.util.*;

// Write a program and check wheather 7th and 15th and 21th and 28th bit is on or off 

class Program3
{
    public static boolean CheckBit(int iNo)
    {
         int iMask = 0X08104040 ;     //135282752
         int Result =0; 
         
         Result = iNo & iMask ;

         if(Result == iMask)
         {
             return true;
         }
         else
         {
             return false;
         }

    }
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter Number :");
        iNo = sobj.nextInt();
        
        bRet = CheckBit(iNo);
        
        if(bRet == true)
        {
            System.out.println("7th and 15th  and 21 and 28 bit is ON");
        }
        else
        {
            System.out.println("Bits Are OFF");
        }

    }
}