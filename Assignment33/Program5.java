

import java.util.*;

//3.Write a program which accept N numbers from user and Display all such elements which  are Multiples of 11

//Input N 6 
   
//         Elements : 85 66 3 80 55 88 60 
//Output:  66 55 88

   


class Program5
{    
     
     //method to display Multiples of 11
     public static void Display(int Brr[])
     {
             
       
         int iCnt = 0 ;
         System.out.println();

         for(iCnt =0; iCnt < Brr.length; iCnt++) //Brr.length which gives us length of array in java 
         {
             if((Brr[iCnt] % 11) == 0) 
             {
                System.out.print(Brr[iCnt]+"\t");
             }
             System.out.println();
         }

     }

    public static void main(String Args[])    //Entry point method from where execution get starts
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