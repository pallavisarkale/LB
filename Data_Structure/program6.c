#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;//size of int 4byte
    struct node * next;//8 byte

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head ,int iNo)//PPNODE due to adress of First i.e Head
{
    //declare node newn
    PNODE newn=NULL;

    //Allocate dynamically memory to newn
    newn=(PNODE)malloc(sizeof(NODE));//allocate 12 byte memory to newn

    //initialize 
    newn->data=iNo;
    newn->next=NULL;

    //check LL is empty or not
    if (*Head == NULL)//LL is empty
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
    printf("Elements from Linked List are: \n");
    while (Head!=NULL)
    {
        printf("| %d |->",Head->data);//for decoration purpose we use | before and after %d
        Head=Head->next;
    }
    printf("NULL \n");    
}

int Count(PNODE Head)
{
    int iCount=0;
    while (Head!=NULL)
    {
        //printf("| %d |->",Head->data);//for decoration purpose we use | before and after %d
        iCount ++;
        Head=Head->next;
    }
    return iCount;  
}

int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,101);//&First so insertFirst needs PPNODE Head
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);


    Display(First);//First so Display need PNODE Head

    iRet=Count(First);
    printf("\n Number of node in Linked List is: %d",iRet);

//to check how to add and update node
    /*InsertFirst(&First,1);

    Display(First);//First so Display need PNODE Head

    iRet=Count(First);
    printf("\n Number of node in Linked List is: %d",iRet);*/

    

    return 0;
}