
    //Proobem Statement :3.Accept N number from user and displya all such elements which are even and divisible by 5

    /* Input N :6
         Elements : 85 66 3 80 93 88
         Output :80

    */
    //Program Layout 

    #include<stdio.h>//for Printf scanf
    #include<stdlib.h> //For malloc and free 
  
  //Function to find even and divisible by 5 Elements

    void Display(int Arr[] , int iLength)  
    {
        register int iCnt = 0; 
        
        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0 && Arr[iCnt] % 5 == 0)
            {
                printf("%d\n",Arr[iCnt]);
            }

        }
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                               
    //                                Entry Point Function 
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int main()
    {

     int iSize =0 , iRet = 0 ;
     int iCnt = 0;
     int *p = NULL;   //Varialbe to store pointer

    printf("Enter number of elements:"); //Print msg on screen
    scanf("%d",&iSize); 


    p = (int *)malloc(iSize * sizeof(int )); //Malloc Call for dynamic memory allocation
    printf("Dynamic memory gets allocated successfully for %d\n ",iSize);

    if(p == NULL)
    {
        printf("Unable to Allocate the Memory");
        return -1;
    }
    
    printf("Enter %d elements",iSize);

    for(iCnt =0 ; iCnt < iSize; iCnt++)
    {
        printf("\nEnter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
        
    Display(p,iSize); //function call
    
    free(p);
    printf("Dynamic memory gets deallocated successfully...\n");

        return 0;
    }