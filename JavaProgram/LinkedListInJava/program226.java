package LB.JavaProgram.LinkedListInJava;

import java.util.*;


class node//struct node{}
{
    public int data;
    public node next;//struct node *next  node same as class name node
}

class SinglyLL
{
    public node Head;
    public int Count;

    public SinglyLL()
    {
        Head=null;
        Count=0;
    }

    public void InsertFirst(int no)
    {
        node newn=new node();//creating new node

        newn.data=no;
        newn.next=null;

        if(Head==null)
        {
            Head=newn;
        }
        else
        {
            newn.next=Head;
            Head=newn;
        }
        Count++;
    }

    public void InsertLast(int no)
    {
        node newn=new node();//creating new node

        newn.data=no;
        newn.next=null;

        if(Head==null)
        {
            Head=newn;
        }
        else
        {
            node temp=Head;
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            temp.next=newn;
        }
        Count++;
    }

    public void Display()
    {
        node temp=Head;

        System.out.println("Elements in Linked List are:");
        while(temp!=null)
        {
            System.out.print("|"+temp.data+"|->");
            temp=temp.next;
        }
        System.out.println("NULL");
        System.out.println("Number of Node ="+Count);

    }
}

class program226
{
    public static void main(String[] args) {
        
        SinglyLL obj=new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(41);
        obj.InsertFirst(21);
        obj.InsertFirst(11);


        obj.Display();

        obj.InsertLast(101);
        obj.Display();




    }
}