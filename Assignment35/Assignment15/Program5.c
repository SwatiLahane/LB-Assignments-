 
        /*Input  :N : 6

        Element : 15 66 3 70 10 88

        Output  : 45

        Input  :N  : 6
                
        Element : 44 66 72 70 10 88
        output  : 0
        */

         //5. Accept N Numbers from user and return product iof all Odd elements.



        #include<stdio.h> // printf and scanf
        #include<stdlib.h>//For malloc and free

        int Product(int Arr[] ,int iLength)
        {
            register int iCnt = 0; 
                    int iCount = 0 ,Product1 = 1;
            for(iCnt = 0 ; iCnt < iLength ; iCnt++)
            { 

                if(Arr[iCnt] % 2 != 0)
                {
                  Product1 = Product1 * Arr[iCnt];
                  return Product1;
                }
                else
                {
                    return 0;
                }
            } 
            
        }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                   
//              ENtry point function from where execution get starts
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int main()

        {

        register int iCnt = 0;
        auto int iSize = 0, iRet = 0;
        auto int *p = NULL;  

        
        
        printf("Enter Number of elements :\n");
        scanf("%d",&iSize);

       
        p = (int *) malloc(iSize * sizeof(int)); //malloc call

        printf("Dynamic memory gets allocated sucessfully for %d Elements\n",iSize); 

        if(p == NULL)
        {
            printf("Unable to allocate Memory ");
            return -1;
        }

        printf("Enter %d elements " ,iSize);

        for (iCnt =0; iCnt < iSize; iCnt++)
        {
            printf("\nEnter Element %d :",iCnt + 1 );
            scanf("%d", &p[iCnt]);

        }
        iRet = Product(p,iSize); //Function Call
        
        printf("Product is : %d\n",iRet);
        
        free(p);//
        printf("Dynamic memory gets deallocated sucessfully......\n");
            return 0;

        }