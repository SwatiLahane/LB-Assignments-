
#include<stdio.h>



//PRoblem Statemnet :Write a proogram which accept total marks from user and Calculate percentage


//Function to calculate Percentage
float Percentage(int itotal,int iMarks)

{ 
    float fpercentage = 0.0f;

    if(iMarks < 0 || itotal < 0 || itotal > iMarks)  //Filter
    {
        printf("Invalid Input\n");
        return fpercentage;
    }

    fpercentage = (((float)itotal /(float) iMarks)*100);

    return fpercentage;

}


//Entery Point Functiom

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float iRet = 0.0f;
 
    printf("Please Enter Total Marks ");
    scanf("%d",&iValue2);


    printf("Please enter obtained Marks ");
    scanf("%d",&iValue1);

    
   iRet =  Percentage(iValue1,iValue2);//Function Call

   printf("Your percentage is %f",iRet);

    return 0;
}

//Test step 
/*
  Enter the marks   : 400
  Enter total Marks : 100
  Output  :Invalid Input
  your percentage is 0.000000


  input   : 745  1000
  Output  :74.5% 


*/