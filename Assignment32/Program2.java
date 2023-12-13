import java.util.*;

//Problem statement
//2 .Write a java Program Which accept string from from user and count number of small character 


//Input : Marvellous
//Output : 9

class Program2
{   

   public static int CountSmall(String str)
   {
       int icnt =0;
       int iCount = 0;
       char Arr[] = str.toCharArray();

       for(icnt =0; icnt < Arr.length; icnt++)
       {
           if((Arr[icnt] >= 'a') && (Arr[icnt] <= 'z'))
           {
               iCount++;
           }
       }

        return iCount;
   }
   public static void main(String Args[])

   {
      Scanner sobj = new Scanner(System.in);
      String str =null;
       int iRet = 0; 

      System.out.println("Enter The String:");
      str = sobj.nextLine();
    
      iRet = CountSmall(str);
      System.out.println("Count of small characters are :"+iRet);

      sobj.close();
   
   }
}