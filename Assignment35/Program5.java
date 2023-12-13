
//5.Write a java Program which accept N Numbers from user and return product of all the odd elements

//Input N : 6
// Elements : 15 66 3 70 10 88

//Output : 45

//Input N : 6
// Elements : 44 66 72 70 10 88

//Output : 0


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


 class Program5
 {
     public static int Product(int Arr[])
     {
         int iCnt =0;
         int product = 1;
         for(iCnt = 0; iCnt < Arr.length; iCnt++)
         {
             //System.out.print(Arr[iCnt]);
             if(Arr[iCnt] % 2 != 0) 
             {
                product = Arr[iCnt] * product;
             }      
            
         }
         return product;   
     }
 
     public static void main(String Args[])
     {
         Scanner sobj = new Scanner(System.in);
         int iSize =0;
         int iCnt =0,iValue =0;
         
         int iRet = 0;
 
         System.out.println("Enter Number of elements :\n");
         iSize = sobj.nextInt();
         
         int Brr[] = new int[iSize];
 
 
         System.out.println("Enter Elements :");
 
         for(iCnt = 0; iCnt < iSize; iCnt++)
         {
             Brr[iCnt] = sobj.nextInt(); 
         }
         
         iRet = Product(Brr);
         
         System.out.println(" "+iRet);
 
        sobj.close();
     }
 }
