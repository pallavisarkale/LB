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

void AdditionofDigits(PNODE Head)
{
    int iDigit=0,iSum=0;

    int iSize=0;
    iSize=Count(Head);

    while (Head!=NULL)
    {    iSum=0;
        while (Head->data>0)
        {
            iDigit=(Head->data)%10;
            iSum=iSum+iDigit;
            Head->data=Head->data/10;
        }
        printf("%d\t",iSum);

        Head=Head->next;
    }
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

    AdditionofDigits(First);

    return 0;
}