

import java.util.*;
//Write a java program which accept string from user and return difference between frequency of small and frequency of capital characters

 
class Program3
{
     
    //Function to calculate the Difference between small and capital Characters
    public static int CountDiff(String str)
    {
        int icnt = 0;
        int iCount =0, iCount1 =0;;
        int Diff =0;
         char Arr[] = str.toCharArray();
        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            if((Arr[icnt] >= 'A')&& (Arr[icnt] <= 'Z'))
            {
                iCount ++;
            }
            else if((Arr[icnt] >= 'a')&& (Arr[icnt] <= 'z'))
            {
                iCount1 ++;
            }

          
        }
        return (Diff = iCount1 - iCount);
    }

   public static void main(String Args[])   //Entry Point Fucntion 
    {
        Scanner sobj = new Scanner(System.in);  //Scanner class object to Accept input
        String str = null;
        
        int iRet = 0;
        System.out.println("Enter String:"); 
        str = sobj.nextLine();
        
        
        iRet = CountDiff(str);
        
        System.out.println("Difference between capital and small character:"+iRet);  //Diff of Small and capital character
         sobj.close();  

    }

}

