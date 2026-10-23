#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};
class linked_list
{
    public:
    node *head;
    linked_list()
    {
        head=NULL;

        
    }
    

 void insert(int x)
 {
    node *p=new node(x);
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        node *q=head;
        while(q->next!=NULL)
        q=q->next;
        q->next=p;
        p->prev=q;
    }
 }
 void display(void)
 {
    node *q;
    q=head;
    while(q!=NULL)
    {
        cout<<q->data<<"<=>";
        q=q->next;
    }

 }
 void remove(int x)
 {
    node *p=NULL;
    if(head->data==x)
    {
        p=head;
        head=head->next;
        delete p;
        return;
    }
    node *q=head;
    while(q->next!=NULL)
    {
    if(q->next->data==x)
    {
        p=q->next;
        q->next=p->next;
        p->next->prev=q;
        delete p;
        return;
    }
    q=q->next;

    }
    cout<<"Data not found in list"<<endl;
 }
};

int main()
{
    linked_list list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    cout<<"\nList before removing element:"<<endl;
    list.display();
    cout<<endl;
    list.remove(40);
    cout<<"\nList after removing element:"<<endl;
    list.display();
    return 0;

}

\Output:
PS D:\Swamini14> cd "d:\Swamini14\" ; if ($?) { g++ doublylinked_list.cpp -o doublylinked_list } ; if ($?) { .\doublylinked_list }

List before removing element:
10<=>20<=>30<=>40<=>50<=>

List after removing element:
10<=>20<=>30<=>50<=>
