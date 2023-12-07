 
//Problem Statement :Write a program which accept name from user and print that name

//Input  :Piyush Khairnar
//Output : Piyush Khairnar
 #include<stdio.h>


 int main()

 {
         
        //Create a string
     char fullName[30];
    
    printf("Please Enter Full Name :\n");

   //Get The text
   // scanf() function to get a single word as input, and use fgets() for multiple words.

    fgets(fullName, sizeof(fullName), stdin);

    //scanf("%s",&Name);

    printf("Your Name is %s ",fullName);

    return 0;

 }