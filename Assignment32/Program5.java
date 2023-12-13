

import java.util.*;
//Write a java program which accept string from user and display it in reverse order
//Input :Marvellous 
//Output: "suollevraM"

 
class Program5
{
     
    //Function to calculate the Difference between small and capital Characters
    public static void Reverse(String str)
    {
        int icnt = 0;
        int iCount =0, iCount1 =0;;
        int Diff =0;
         char Arr[] = str.toCharArray();
         String Rev = " ";
        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            
          Rev = Arr[icnt] + Rev;//adds each character in front of the existing string
          
        }
       System.out.println("Reversed "+Rev);
    }

   public static void main(String Args[]) //Entry Point Fucntion 
    {
        Scanner sobj = new Scanner(System.in);  //Scanner class object to Accept input
        String str = null;
        
        int iRet = 0;
        System.out.println("Enter String:"); 
        str = sobj.nextLine();
        
        
         Reverse(str);
         sobj.close();  

    }

}

