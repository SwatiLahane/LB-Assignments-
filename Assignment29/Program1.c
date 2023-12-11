

//1.Write a program which search first Occurance of particular elements from singly Linear List 
//Function should return position at which element is found 

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;

 
};


typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;



void InsertFirst(PPNODE Head , int No)
{

  PNODE newn =NULL;
  newn = (PNODE) malloc(sizeof(NODE));

  newn->data = No;
  newn->next = NULL;

  if(*Head == NULL)
  {
      *Head = newn;
  }
  
  else
  {
      newn->next = *Head;
      *Head = newn;
  }

}

void Display(PNODE Head)
{
    printf("Elements of Linked list:\n");
    {
        while(Head != NULL)
        {
         printf("| %d |-> ",Head->data);
         Head = Head->next;
        }
        printf("NULL\n");
    }
}
int Count(PNODE Head)
{
     int icnt =0;

     while(Head != NULL)
        {
            icnt++;
         Head = Head->next;
        }
        return icnt;
    }

int SearchFirstOcc(PNODE Head,int No)
{  
   int Addition = 0;
  int icnt = 0;
   

   while(Head != NULL)
   {
       icnt++;

       if(No == Head->data)
       {
         return icnt;
       }
       Head = Head->next;
      
   }
    
}

int main()
{

  PNODE First = NULL;
  int iRet = 0;

   InsertFirst(&First,40);
   InsertFirst(&First,30);
   InsertFirst(&First,20);
   InsertFirst(&First,10);
  
    Display(First);
    iRet = Count(First);
    printf("Number of Nodes is : %d\n",iRet);
    

    iRet = SearchFirstOcc(First,30);
    printf("First Occurance :%d\n",iRet);

    return 0;
}