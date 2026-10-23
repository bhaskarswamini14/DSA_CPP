
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

class queue
{
private:
    node *front;
    node *rear;

public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }

    int empty()
    {
        return (front == NULL);
    }

    void enqueue(int x)
    {
        node *p = new node(x);

        if (empty())
        {
            front = p;
            rear = p;
        }
        else
        {
            rear->next = p;
            rear = p;
        }
    }

    int dequeue()
    {
        if (empty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }

        int x = front->data;
        node *p = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete p;
        return x;
    }

    int peek()
    {
        if (empty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }

        return front->data;
    }

    void display()
    {
        node *q = front;

        while (q != NULL)
        {
            cout << "\t" << q->data;
            q = q->next;
        }

        cout << endl;
    }
};

int main()
{
    queue q;
    int x;

    cout<<"\nQueue before removing front element"<<endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();

    x=q.peek();
    cout<<"Front element is :"<<x<<endl;
    x=q.dequeue();
    cout<<"Queue after removing front element"<<endl;
    q.display();
    x=q.dequeue();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    //Output:Queue Underflow

    return 0;
}

/*
//Output:
PS D:\Swamini14> cd "d:\Swamini14\" ; if ($?) { g++ queue_link.cpp -o queue_link } ; if ($?) { .\queue_link }

Queue before removing front element
        10      20      30      40      50
Front element is :10
Queue after removing front element
        20      30      40      50
PS D:\Swamini14>
 */