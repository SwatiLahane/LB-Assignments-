
    //5.Write a Program which accept number from user and return difference between summation of even digits and summation of odd digits
    #include<stdio.h>

   
   //Function  to to count even and odd digit and find out there difference
    int countDiff(int iNo)

    {
    auto int iDigit = 0;
    auto int iEven  = 0;
    auto int iOdd   = 0;
    auto int iDiff  = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
            if(iDigit % 2 == 0)  
            {
                    iEven  = iEven + iDigit;
            }
            
            if( iDigit % 2 != 0)
        {
            iOdd = iOdd + iDigit;
        }
            
            
            iNo = iNo / 10;
            iDiff = iEven - iOdd;
        
    }
        return iDiff;
    }

    int main()
    {
        auto int iValue = 0;
        auto int iRet = 0;

        printf("Enter number :");
        scanf("%d",&iValue);

        iRet = countDiff(iValue);//Function call

        printf("Difference is :%d " , iRet);

       return 0;
    }
    //Test Steps
    /*
    Input : 2395
    Output : -15

    Input : 1018
    Output : 6

    Input : 8440
    Output : 16

    Input : 5733
    Output : -18
    
    */