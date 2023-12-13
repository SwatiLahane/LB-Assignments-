//4.Write a java Program which accept N Numbers from user and accept N Numbers from user and accept 
//Range ,Display all elemets from that Range

 //Input : 6
 //Start : 60
 //End   : 90


 //Elements : 85 66 3 66 93 88
 //Output : 66 76 88

 //Input : 6
 //Start : 30
 //End   : 50


 //Elements : 85 66 3 76 93 88
 //Output : 

 import java.util.*;


 class Program4
 {
     public static void Display(int Arr[], int iStart , int iEnd)
     {
         int iCnt =0;
         System.out.println();
         for(iCnt = 0; iCnt < Arr.length; iCnt++)
         {
             if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))   
             {
                 System.out.println(Arr[iCnt]+"\t");
             }
         }
        
     }
 
     public static void main(String Args[])
     {
         Scanner sobj = new Scanner(System.in);
         int iSize =0;
         int iCnt =0,iValue =0, iValue1 = 0;
         
         boolean bRet = false;
 
         System.out.println("Enter Number of elements :\n");
         iSize = sobj.nextInt();
         
         int Brr[] = new int[iSize];
 
         System.out.println("Enter Start Point :");
         iValue = sobj.nextInt();

         System.out.println("Enter End Point :");
         iValue1 = sobj.nextInt();
         
 
         System.out.println("Enter Elements :");
 
         for(iCnt = 0; iCnt < iSize; iCnt++)
         {
             Brr[iCnt] = sobj.nextInt(); 
         }
         
        Display(Brr, iValue,iValue1);
         
         
        sobj.close();
     }
 }