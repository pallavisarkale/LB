#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int iNo)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

    if (*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
    
}

void Dispaly(PNODE Head)
{
    printf("Elements in Linked List are :\n");

    while (Head!=NULL)
    {
        printf("| %d |->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
    

}

int Count(PNODE Head)
{
    int iCount=0;
    while (Head!=NULL)
    {
        iCount++;
        Head=Head->next;
    }  
    return iCount;
}

int SearchLastOcc(PNODE Head,int iNo)
{
    int iSize=0;
    int iPos=0,iCnt=0,iCount=0;

    iSize=Count(Head);

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        if (Head->data==iNo)
        {  
           iPos=iCnt;
        }
        Head=Head->next;
    }
    
  return  iPos;      
}

int main()
{

    int iRet=0,iPos=0,iNo=0;

    PNODE First=NULL;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,1);

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,1);

    Dispaly(First);
    iRet=Count(First);

    printf("Count of Elements in Linked List are : %d\n",iRet);

    printf("Enter Number To search in LinkedList:\t");
    scanf("%d",&iNo);
    

    iPos=SearchLastOcc(First,iNo);
    printf("First Occurence of %d  is  : %d",iNo,iPos);

    return 0;
}