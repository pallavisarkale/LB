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
//if fuction made changes in linked list then use PPNODE in function i.e PPNODE Head
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

void InsertLast(PPNODE Head ,int iNo)//PPNODE due to adress of First i.e Head
{
    //declare node newn
    PNODE newn=NULL;
    //we need to create  temp due to this function is called by address
    PNODE Temp=NULL;

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
        
        Temp=*Head;
        //travel till last node
        while (Temp->next!=NULL)
        {
            Temp=Temp->next;
        }
        Temp->next=newn;//newn means address of node which we wants to store last
        
        //store address of new node in tha next pointer of last node  
    } 
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp=NULL;

    if (*Head==NULL)
    {
        return;//if Linked list is empty then exit   
    }
    else
    {
        Temp=*Head;
        *Head=Temp->next;
        free(Temp);   
    }
    
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp=NULL;

    if (*Head==NULL)
    {
        return;//if Linked list is empty then exit   
    }
    else if ((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        Temp=*Head;
        while (Temp->next->next!=NULL)
        {
           Temp=Temp->next;
        }
        free(Temp->next);
        Temp->next=NULL;
    }
}


void Display(PNODE Head)
{
    printf("\n Elements from Linked List are: \n");
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

void InsertAtPos(PPNODE Head,int iNo,int iPos)
{
    PNODE newn=NULL;
    PNODE Temp=NULL;

    int iSize=0,iCnt=0;
    
    //call by value means we pass *Head
    iSize=Count(*Head);//*Head due to we need to pass address

//updator to check position is correct or not
    if ((iPos<1) || (iPos>(iSize+1)))
    {
        printf("Position is invalid\n");
        return;
    }
    
    if (iPos==1)
    {
        //Call by address so pass Head
        InsertFirst(Head,iNo);
    }
    else if (iPos==(iSize+1))
    {
        InsertLast(Head,iNo);
    }
    else
    {
        //Allocate dynamically memory to newn
        newn=(PNODE)malloc(sizeof(NODE));//allocate 12 byte memory to newn
        //initialize 
        newn->data=iNo;
        newn->next=NULL;

        Temp=*Head;

        for (iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            Temp=Temp->next;
        }
        newn->next=Temp->next;
        Temp->next=newn;
        
    }
}

void DeleteAtPos(PPNODE Head,int iPos)
{
    PNODE newn=NULL;
    PNODE Temp=NULL;
    PNODE TepmDel=NULL;

    int iSize=0,iCnt=0;
    
    //call by value means we pass *Head
    iSize=Count(*Head);//*Head due to we need to pass address

//updator to check position is correct or not
    if ((iPos<1) || (iPos>iSize))
    {
        printf("Position is invalid\n");
        return;
    }
    
    if (iPos==1)
    {
        //Call by address so pass Head
        DeleteFirst(Head);
    }
    else if (iPos==iSize)
    {
        DeleteLast(Head);
    }
    else
    {
        Temp=*Head;

        for (iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            Temp=Temp->next;
        }
        TepmDel=Temp->next;
        Temp->next=Temp->next->next;
        free(TepmDel);
    }
}
int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,101);//&First so insertFirst needs PPNODE Head
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    printf("\nAfter InserAtPos :\n");
    InsertAtPos(&First,75,3);

    Display(First);//First so Display need PNODE Head

    printf("\nAfter After DEletAtPos :\n");
    DeleteAtPos(&First,3);
    Display(First);//First so Display need PNODE Head


    iRet=Count(First);
    printf("\n Number of node in Linked List is: %d",iRet);

    InsertLast(&First,111);
    InsertLast(&First,121);

    
    Display(First);
    iRet=Count(First);

    printf("\n Number of node in Linked List is: %d",iRet);

    DeleteFirst(&First);

    Display(First);
    iRet=Count(First);

    printf("\n After delete first  node in Linked List is: %d",iRet);

    DeleteLast(&First);

    Display(First);
    iRet=Count(First);

    printf("\n After delete Last  node in Linked List is: %d",iRet);


    return 0;
}