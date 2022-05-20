//Prime

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

void Display(PNODE Head)
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

void DisplayPrime(PNODE Head)
{
    int iCount=0,iSize=0;
    int iSum=0,iCnt=0;;
    iSize=Count(Head);

    while (Head->next!=NULL)
    {    
        iCount=0;
        for(iCnt=2;iCnt<=(Head->data)/2;iCnt++)
        {
            if ((Head->data%iCnt)==0)
            {
                iCount++;   
            }
        }
        if (iCount==0)
        {
            printf("%d\t",Head->data);
        }
        Head=Head->next;
    }
}

int main()
{

    int iRet=0,iPos=0,iNo=0;

    PNODE First=NULL;

    InsertFirst(&First,101);
    InsertFirst(&First,1);
    InsertFirst(&First,28);
    InsertFirst(&First,61);
    InsertFirst(&First,11);
    InsertFirst(&First,01);
    InsertFirst(&First,6);
    InsertFirst(&First,5);
    InsertFirst(&First,7);
    InsertFirst(&First,13);

    Display(First);
    iRet=Count(First);
    
    DisplayPrime(First);

    return 0;
}