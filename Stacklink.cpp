#include<iostream>
using namespace std;
#define MAX 5
class node
{
    public:
    int data;
    node *next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};
class stack
{
    private:
    node *top;
    public:
    stack()
    {
        top=NULL;
    }
    int empty()
    {
        if(top==NULL)
        return(1);
        else
        return(0);
    }
    void push(int x)
    {
        node *p=new node(x);
        p->next=top;
        top=p;
    }
    int pop()
    {
        int x=top->data;
        node *p=top;
        top=top->next;
        delete p;
        return(x);
    }
    void display()
    {
       node *q=top;
       while(q!=NULL)
       {
        cout<<endl<<q->data<<"\n-----"<<endl;
        q=q->next;
       }

    }
    int peek()
    {
        return(top->data);
    }
};
int main()
{
    stack s;
    int x;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();

    x=s.peek();
    cout<<"\nTop element is :"<<x<<endl;
    x=s.pop();
    cout<<"Removed top element "<<endl;
    s.display();

    s.pop();
    s.pop();
    s.pop();
    //output:Stack Underflow
    return 0;

}

/*
//Output:
PS D:\Swamini14> cd "d:\Swamini14\" ; if ($?) { g++ Stacklink.cpp -o Stacklink } ; if ($?) { .\Stacklink }

50
-----

40
-----

30
-----

20
-----

10
-----

Top element is :50
Removed top element 

40
-----

30
-----

20
-----

10
-----
PS D:\Swamini14> 
*/





 





