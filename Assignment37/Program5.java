
//typedef unsigned int UINT
import java.util.*;

// Write a program and check wheather  first and last bit is on or Off .first bit means number 1 and last bit 
//means number 32

class Program5
{
    public static boolean CheckBit( int iNo)
    {
         int iMask = 0X80000001 ;     //
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
        int  iNo = 0;
        boolean bRet = false;

        System.out.println("Enter Number :");
        iNo = sobj.nextInt();
        
        bRet = CheckBit(iNo);
        
        if(bRet == true)
        {
            System.out.println("1st and 32 bit is ON");
        }
        else
        {
            System.out.println("Bits Are OFF");
        }

    }
}