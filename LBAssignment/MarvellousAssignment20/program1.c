//Perfect
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

void DisplayPerfect(PNODE Head)
{
    int iSize=0;
    int iSum=0,iCnt=0;;
    iSize=Count(Head);

    while (Head->next!=NULL)
    {
        iSum=0;
    
        for(iCnt=1;iCnt<=(Head->data)/2;iCnt++)
        {
            if ((Head->data%iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
        }
        if (iSum==Head->data)
        {
            printf("Perfect Numbers are : %d\n",Head->data);
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

    Display(First);
    iRet=Count(First);
    
    DisplayPerfect(First);

    return 0;
}