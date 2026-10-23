#include<iostream>
using namespace std;
#define MAX 5

class queue
{
    private:
    int a[MAX];
    int front;
    int rear;

    public:
    queue()
    {
        front=-1;
        rear=-1;
    }
    int empty()
    {
        if(front==-1 && rear==-1)
        return(1);
        else
        return(0);
    }
    int full()
    {
        if(rear==MAX-1)
        return(1);
        else
        return(0);
    }
    void enqueue(int x)
    {
        if(front==-1 && rear==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        a[rear]=x;
    }
    int dequeue()
    {
        int x=a[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }
        return(x);
    }
    int peek()
    {
        return (a[front]);

    }
    void display()
    {
        for(int i=front;i<=rear;i++)
        cout<<a[i]<<"\t"; 
    }
    };
    int main()
    {
        //Enqueue operations
        queue q;
        if(!q.full())
        q.enqueue(10);
        else
        {
            cout<<"\nQueue is FULL"<<endl;
        }
        cout<<"\nQueue contents after enqueue operation:"<<endl;
        q.display();

        if(!q.full())
         q.enqueue(20);
        else
        {
            cout<<"Queue is FULL"<<endl;
        }
        cout<<"\nQueue contents after enqueue operation:"<<endl;
        q.display();

        if(!q.full())
         q.enqueue(30);
        else
        {
            cout<<"Queue is FULL"<<endl;
        }
        cout<<"\nQueue contents after enqueue operation:"<<endl;
        q.display();

        if(!q.full())
         q.enqueue(40);
        else
        {
            cout<<"Queue is FULL"<<endl;
        }
        cout<<"\nQueue contents after enqueue operation:"<<endl;
        q.display();

        if(!q.full())
         q.enqueue(50);
        else
        {
            cout<<"Queue is FULL"<<endl;
        }
        cout<<"\nQueue contents after enqueue operation:"<<endl;
        q.display();

        if(!q.full())
         q.enqueue(60);
        else
        {
            cout<<"\nQueue is FULL"<<endl;
        }
        cout<<"\nQueue contents after enqueue operation:"<<endl;
        q.display();

        //Dequeue operations
        for(int i=0;i<6;i++)
        {
            if(q.empty())
            {
                cout<<"\nQueue is EMPTY"<<endl;
            }
            else
            {
                cout<<"\nDequeued out element is "<<q.dequeue()<<endl;
            }
            cout<<"\nQueue contents after dequeue operation:"<<endl;

            if(!q.empty())
            q.display();
            else
            cout<<"\nQueue is EMPTY"<<endl;
        }
        return 0;
    }

    //Output:
    /*
    PS D:\Swamini14> cd "d:\Swamini14\" ; if ($?) { g++ queueA.cpp -o queueA } ; if ($?) { .\queueA }

Queue contents after enqueue operation:
10
Queue contents after enqueue operation:
10      20
Queue contents after enqueue operation:
10      20      30
Queue contents after enqueue operation:
10      20      30      40
Queue contents after enqueue operation:
10      20      30      40      50
Queue is FULL

Queue contents after enqueue operation:
10      20      30      40      50
Dequeued out element is 10

Queue contents after dequeue operation:
20      30      40      50
Dequeued out element is 20

Queue contents after dequeue operation:
30      40      50
Dequeued out element is 30

Queue contents after dequeue operation:
40      50
Dequeued out element is 40

Queue contents after dequeue operation:
50
Dequeued out element is 50

Queue contents after dequeue operation:

Queue is EMPTY

Queue is EMPTY

Queue contents after dequeue operation:

Queue is EMPTY
PS D:\Swamini14> 
*/
