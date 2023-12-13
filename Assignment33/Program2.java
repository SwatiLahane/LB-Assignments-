
import java.util.*;

//1.Write a program which accept N numbers from user and Display all such elements are divisible by 5

//Input N 6 
   
//         Elements : 85 66 3 80 93 88 
//Output: 85 80


class Program2
{   
    public static void Display(int Brr[])
    {
        int iCnt =0; 
        System.out.println("Divisble by 5 Numbesr are:");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
          if(Brr[iCnt] % 5 == 0)
          {
             System.out.print(Brr[iCnt]+"\t"); 
          }
          System.out.println();
        }
    }
    public static void main(String Args[])
    {

      Scanner sobj = new Scanner(System.in);
      int iSize = 0; 
      int iCnt = 0;

      System.out.println("Enter the number of element:");
      iSize = sobj.nextInt();

      int Arr[] = new int[iSize]; //dynamic memory allocation for array
      
      System.out.println("Enter the Elements: ");
      for(iCnt =0; iCnt < iSize; iCnt++)
      {
        Arr[iCnt] = sobj.nextInt();
      }
      
      Display(Arr);
      sobj.close();

    }
}


