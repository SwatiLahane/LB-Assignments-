
import java.util.*;

//1.Write a program which accept N numbers from user and return difference between summantion of even elements and summation of odd elements

//Input N 6 
   
//         Elements : 85 66 3 80 93 88 
//Output: 53(234 - 181) 

class Program1
{    

    //Function to calculate difference between sum of Even and odd elements
    public static int EvenOddDiff(int Brr[])
    
    {   
        int iSum =0;
        int iSum1=0;
        int iCnt = 0,Diff = 0;
        for(iCnt =0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] % 2 == 0)
            {
            iSum = iSum + Brr[iCnt];
            }
           else if(Brr[iCnt] %2 != 0)
           {
            iSum1 = iSum1 + Brr[iCnt];
           }
          Diff = iSum - iSum1;
        }
      return Diff;
    }

    public static void main(String Args[]) //Entry point fucntion
    {
        
        Scanner sobj = new Scanner(System.in);
        int iSize = 0;
        int iCnt =0;
        int iRet =0;

        System.out.println("Enter number of elements:");
        iSize = sobj.nextInt();
        
        int Arr[] = new int[iSize];  //Dynamic memory allocation for Array

        System.out.println("Enter Elements :");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
        iRet = EvenOddDiff(Arr);
        System.out.println("Difference betweeen even and odd elemenets :"+iRet);
       sobj.close();
    }
}

