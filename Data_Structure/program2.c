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

typedef struct node NODE;//rename struct node as NODE

int main()
{
//static memory allocation
    NODE obj;

//Dynamic memory location
    NODE *ptr = (NODE *)malloc(sizeof(NODE));//12 byte


    obj.data=11;
    obj.next=NULL;


    ptr ->data=11;
    ptr->next=NULL;
    



    return 0;
}