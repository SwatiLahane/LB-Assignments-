

import java.util.*;


//Problem statement

//Write a java program Which accept string from user and check wheather it conatins vowels in it or not




class Program4
{
    
    public static boolean ChkVowels (String str)
    {
           int  icnt = 0;
           int  iCount = 0;
           char Arr[] = str.toCharArray();
           
           for(icnt =0; icnt < Arr.length; icnt++)
           {
               if(Arr[icnt] == 'a' || Arr[icnt] == 'e' ||  Arr[icnt] == 'i' || Arr[icnt] == 'o' || Arr[icnt] == 'u' || Arr[icnt] == 'w')
               {
                   return true;
               }
                
           }
           return false;
    }

    public static void main(String Arg[])
    {
      Scanner sobj = new Scanner(System.in);

      String str = null;
      boolean bRet = false;
       
     try{
       
      System.out.println("Enter String :");
      str = sobj.nextLine();

       
      bRet = ChkVowels(str);
      if(bRet == true)
      {
        System.out.println("true");
      }
      else
      {
          System.out.println("false");
      }
      
    }
       catch(ArrayIndexOutOfBoundsException obj)
       {
        System.out.println("Array index out of bounds exception");

        
       }

       sobj.close();
      
    }
   
}


