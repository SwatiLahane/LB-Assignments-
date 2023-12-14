
//Write a java program which accept 2 sting from user and concat N charactesrs of second string after 
//first string .Value of N should be accepted from user 

//Note if 3rd parameter is greater then the size of second sstring then concat
//whole string after first string

//Input :"Marvellous Infosystems"
//        "Logic Bulding"

 //         5
 
 import java.util.*;
    
 class Program1
 {   
     public static void StrNCatX(String src , String dest , int iCnt)
     {
           // src = src.concat(dest);
            //System.out.println(" "+src);

            System.out.println(" "+ src +" "  + dest +" " );
        
         
        
       }
     public static void main(String Args[])
     {

         Scanner sobj = new Scanner(System.in); 
         String str = null;
         String str1 =null;  
         int iNo = 0; 
         boolean bRet =false;
         int iCnt =0;

        System.out.println("Enter First String :");
        str =  sobj.nextLine();

        System.out.println("Enter Second String :");
        str1 = sobj.nextLine();

        System.out.println("Enter Number :");
        iNo = sobj.nextInt();
        
          
        StrNCatX(str,str1,iNo);
        sobj.close();
        
         } 

 }
