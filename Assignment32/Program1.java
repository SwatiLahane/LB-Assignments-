

import java.util.*;

//Problem on string
//1.Write a java program which accept string from user and and count Number of capital character


//Input : Marvellous Multi OS
//Output: 4

class Program1
{
    public static int CountCapital(String str)  
    {   
        int icnt = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();
        
        for(icnt =0; icnt < Arr.length; icnt++)
        {
           if((Arr[icnt] >= 'A') && (Arr[icnt] <= 'Z'))
           {
            iCount++;
           } 
            
        }
        return iCount;
    } 

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        
        int iRet = 0;
        System.out.println("Enter String:");
        str = sobj.nextLine();
        
        
        iRet = CountCapital(str);
        
        System.out.println("Count of capital letters are:"+iRet);
         sobj.close();  

    }

}
