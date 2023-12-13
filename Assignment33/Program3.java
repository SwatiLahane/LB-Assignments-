

import java.util.*;

//3.Write a program which accept N numbers from user and Display all such elements which  are Even and divisible by 5

//Input N 6 
   
//         Elements : 85 66 3 80 93 88  
//Output:  80 

   


class Program3
{    
     public static void Display(int Brr[])
     {
             //Function to Displlay even and those numbers which are divisible 5

         int iCnt = 0 ;
         System.out.println();

         for(iCnt =0; iCnt < Brr.length; iCnt++) //Brr.length which gives us length of array in java 
         {
             if((Brr[iCnt] % 2 == 0) && (Brr[iCnt] % 5 == 0))
             {
                System.out.println(Brr[iCnt]+"\t");
             }
         }

     }

    public static void main(String Args[])
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