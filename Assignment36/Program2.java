
import java.util.*;

// Write java program which accepts two string from user and check whether contents of two strings are equal or not
//Input: "Marvellous Infosystems"
 //      "Marvellous Infosystems"

 //Output : TRUE




class Program2
{    
public static boolean StrCamX(String src, String dest)
{    

             char Arr[] = src.toCharArray();
             char Arr1[] = dest.toCharArray();
        for(int icnt = 0; icnt < Arr.length;icnt++)
        {
            for(int icnt1 =0 ; icnt1 < Arr1.length; icnt1++)
            {
            if(Arr.length == Arr1.length)
            {
                return true;
            }
           
           
            } 
            
        }
        return false;  
        
}

    public static void main(String Args[])
    {     

    Scanner sobj = new Scanner(System.in);
    String str = null;
    String str1 = null;
    boolean bRet = false;
    
    System.out.println("Enter first String :");
    str = sobj.nextLine();

    System.out.println("Enter first String :");
    str1 = sobj.nextLine();

        bRet = StrCamX(str,str1);

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
}

}