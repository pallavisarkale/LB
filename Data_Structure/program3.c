//LinkedList

#include<stdio.h>
#include<stdlib.h>
//structure declaration of node

struct node
{
    //membors which heterogenious
    int data;           //4byte
    struct node *next;  //pointer  wich  holds 8byte
};

typedef struct node NODE;//use struct node as NODE see Line 20 and 23
typedef struct node * PNODE;//use struct node * as PNODE see line 23


int main()
{
//static memory allocation
    NODE obj;

//Dynamic memory location
    PNODE ptr = (PNODE)malloc(sizeof(NODE));//12 byte


    obj.data=11;
    obj.next=NULL;


    ptr ->data=11;
    ptr->next=NULL;
    



    return 0;
}