
//1.Write a java Program which accept N numbers from user and Accept one another number as NO ,check Wheather No is Present or Not
//Input : 6
 //No : 66

 //Elements : 85 66 3 66 93 88
 //Output : TRUE

 //Input : 6
 //No : 12

 //Elements : 85 11 3 15 11 111
 //Output : FALSE

import java.util.*;


class Program1
{
    public static boolean Check(int Arr[], int iNo)
    {
        int iCnt =0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            //System.out.print(Arr[iCnt]);
            if(Arr[iCnt] == iNo) 
            {
                return true;
            }      

        }
        return false;
    }

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize =0;
        int iCnt =0,iValue =0;
        
        boolean bRet = false;

        System.out.println("Enter Number of elements :\n");
        iSize = sobj.nextInt();
        
        int Brr[] = new int[iSize];

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();
        

        System.out.println("Enter Elements :");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt(); 
        }
        
        bRet = Check(Brr, iValue);
        
        if(bRet == true)
        {
            System.out.println("TRUE");

        }
        
        else
        {
            System.out.println("FALSE");
        }

       sobj.close();
    }
}