

import java.util.*;

//4.Write a java program which accept N numbers from user and Display all such elements which  are divisible by 5 and 3

//Input N 6 
   
//         Elements : 85 66 3 15 93 88 
//Output: 15

   


class Program4
{    
     public static void Display(int Brr[])
     {
             //Function to Displlay even and those numbers which are divisible 5

         int iCnt = 0 ;
         System.out.println();

         for(iCnt =0; iCnt < Brr.length; iCnt++) //Brr.length which gives us length of array in java 
         {
             if((Brr[iCnt] % 3 == 0) && (Brr[iCnt] % 5 == 0))
             {
                System.out.println(Brr[iCnt]+"\t");
             }
         }

     }
 
    public static void main(String Args[])  //Entry point function
    {
       Scanner sobj = new Scanner(System.in);
       int iSize =0;
       int iCnt =0;
       
       System.out.println("Enter the number of elements:");
       iSize = sobj.nextInt();
       
       int Arr[] = new int[iSize]; 

       System.out.println("Enter elements :");
       for(iCnt =0; iCnt < iSize; iCnt++)
       {
          Arr[iCnt] = sobj.nextInt();  
       }

         Display(Arr);
        sobj.close();
      
 }

}