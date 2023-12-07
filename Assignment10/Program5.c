
    //Write a program which accept range from user and display all numbers in between that 
    //range in reverse ordr  

    #include<stdio.h>


    //Function to calculate Range and displya that range in reverse order
    void RangeDisplayRev(int iStart ,int iEnd) 
    {

    if(iStart > iEnd) //FILTER

    {
        printf("Invalid range\n");
    }

            register int iCnt = 0 ;
        for(iCnt = iEnd  ; iCnt >= iStart ; iCnt--)
    {
        printf("%d ",iEnd);
        iEnd--;
    }


    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////  
    //  
    //                        Entry Point Function
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////
    int main()
    {
    auto int iValue1 = 0;//Variable to store iValue1
    auto int iValue2 = 0;//Variable to store ivalue2


    printf("Enter Starting point:");
    scanf("%d",&iValue1);

    printf("Enter Ending point:");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2); //Function call  

    return 0;

    }
    //Time Complexity O(n)

    //Test Cases :
    /*
    input : 23 35
    Output : 35 34 33 32 231 30 29 28 27 26 25 24 23 

    input : 10 18
    Output : 18 17 16 15 14 13 12 11 10 

    input 90 18
    Output : Inlid Range

    input : -10 2
    Output : 2 1 0  -1 -2 -3 -4 -5  -6 -7 -8 -9 -10s


    */