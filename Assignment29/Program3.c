

//3. Write a program which return addition of all element from singly linear linked list

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

int Addition(PNODE Head )
{  
    int Addition = 0;
   while(Head != NULL)
   {
     Addition = Addition + Head->data;  
      Head = Head->next;
   }
  
  return Addition;
}


int main()
{

  PNODE First = NULL;
  int iRet = 0;

   InsertFirst(&First,10);
   InsertFirst(&First,20);
   InsertFirst(&First,30);
   InsertFirst(&First,40);
  
    Display(First);
    iRet = Count(First);
    printf("Number of Nodes is : %d\n",iRet);
    

    iRet = Addition(First);
    printf("Addition is :%d\n",iRet);
    return 0;
}