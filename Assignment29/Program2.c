
//Write a program which search last Occurance of Particular elemement from singly linear linked list .
//function should return position at which emlement is found .


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

int SearchLastOcc(PNODE Head,int No)
{  
  
 //  int icnt = 0,i = 0;
    int Count =0;
    int index =0;
      //Incomplete
  while(Head != NULL)
   {
       
       
         
       if(No == Head->data)
       {
         index=Count;
       }
       Head = Head->next;
       Count++;
   }
    return ;


}

int main()
{

  PNODE First = NULL;
  int iRet = 0;
   
   InsertFirst(&First,70);
   InsertFirst(&First,30);
   InsertFirst(&First,50);
   InsertFirst(&First,40);
   InsertFirst(&First,30);
   InsertFirst(&First,20);
   InsertFirst(&First,10);
  
    Display(First);
    iRet = Count(First);
    printf("Number of Nodes is : %d\n",iRet);
    

    iRet = SearchLastOcc(First,30);
    printf("Last Occurance :%d\n",iRet);
    
    return 0;
}