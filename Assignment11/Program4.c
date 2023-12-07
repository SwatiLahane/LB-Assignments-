

    //Write a program which accept number from user and count frequency of 4 in it 

    #include<stdio.h>

    int CountFour(int iNo)
    {
    int iDigit = 0;
    int count = 0;

    while(iNo > 0)

    {
        iDigit = iNo % 10;

        if(4 == iDigit)
        {
         count++;
        }
        
          iNo = iNo / 10;
       
       } 
       return count;
    }
  


    int main()
    {

        auto int iValue = 0;
        int iRet = 0;

        printf("Enter Number :");
        scanf("%d",&iValue);

        iRet = CountFour(iValue);
        printf("Frequency is %d ",iRet);
        return 0;
        
    }

    //Test Steps
    /*
    
    input :2395
    Output : 0

    Input :1018
    Output :0

    Input: 9440
    Output :2

    Input :922432
    Output:1

    */