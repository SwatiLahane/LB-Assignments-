
import java.util.*;


//typedef unsigned int UINT


// Write a program and check wheather 5th and 18 bit is on or off 

class Program2
{
    public static boolean CheckBit(int iNo)
    {
         int Result =0; 
         int iMask = 0X00004010;
         
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
            System.out.println("5th and 18th bit is ON");
            
        }
        else
        {
            System.out.println("Bits Are OFF");
        }

    }
}