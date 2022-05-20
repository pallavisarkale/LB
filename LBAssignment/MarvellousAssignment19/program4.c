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

int LargestElement(PNODE Head)
{
    int iSize=0;
    int iSum=0,i=0,j=0,iCount=0;
    int iMax=Head->data;

    iSize=Count(Head);

    for(i=1;i<=iSize;i++)
    {
        for (j=i+1;j<=iSize;j++)
        {
            if (iMax<Head->next->data)
            {
                iMax=Head->next->data;
            }
        }
         Head=Head->next;
    }
  return  iMax;      
}

int main()
{

    int iRet=0,iSum=0,iNo=0;

    PNODE First=NULL;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,1);


    Dispaly(First);
    iRet=Count(First);

    

    iSum=LargestElement(First);
    printf("Sum of elements is : %d",iSum);

    return 0;
}