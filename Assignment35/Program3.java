 
 //Write a program which accept N numbers from user and accept one another number as NO ,return  index of first Occurance of that number 

  //Input : 6
 //No : 66

 //Elements : 85 66 3 66 93 88
 //Output : 1

 //Input : 6
 //No : 12

 //Elements : 85 11 3 15 11 111
 //Output : -1

 import java.util.*;




 class Program3
 {  
    public static int FirstOcc(int Arr[] , int iNo)
    {
         int iCnt1 = 1;
         int iCnt =0;
         int ipos = -1;
       for(iCnt = 0; iCnt < Arr.length; iCnt++)
       {
          if(Arr[iCnt] == iNo)
          {  
              
           ipos = iCnt1;
           
          }
          iCnt1++;   
          
       }
      return ipos;
    } 

    public static void main(String Args[])
    {
      Scanner sobj = new Scanner(System.in);
      int iSize =0 ,iValue = 0;
      int iCnt = 0 ,iRet =0 ;

      System.out.println("Enter number of elements :\n");
      iSize = sobj.nextInt();
      
      int Brr[] = new int[iSize];

      System.out.println("Enter Number :");
      iValue = sobj.nextInt();
    
      System.out.println("Enter Elements :");
      for(iCnt = 0; iCnt < iSize; iCnt++)
      {
          Brr[iCnt] = sobj.nextInt(); 
      } 
        
      iRet = FirstOcc(Brr , iValue);
      System.out.println(" : "+iRet);

    }
 }