//LinkedList

#include<stdio.h>
#include<stdlib.h>
//structure declaration of node

struct node
{
    //membors which heterogenious
    int data;           //4byte
    struct node *next;  //8byte
};

int main()
{
//static memory allocation
    struct node obj;

//Dynamic memory location
    struct node *ptr = (struct node *)malloc(sizeof(struct node));


    obj.data=11;
    obj.next=NULL;


    ptr ->data=11;
    ptr->next=NULL;
    



    return 0;
}