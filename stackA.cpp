#include<iostream>
using namespace std;
#define MAX 5

class stack
{
    private:
    int a[MAX];
    int top;

    public:
    stack()
    {
        top=-1;
    }
    int empty()
    {
        if(top==-1)
        return(1);
        else
        return(0);
    }
    int full()
    {
        if(top==MAX-1)
        return(1);
        else
        return(0);
    }
    void push(int x)
    {
        top++;
        a[top]=x;
    }
    int pop()
    {
        int x=a[top];
        top--;
        return(x);
    }
    int peek()
    {
        return (a[top]);

    }
    void display()
    {
        for(int i=top;i>=0;i--)
        cout<<  a[i]<<"\n------"<<endl; 
    }
    };
    int main()
    {
        stack s;
        if(s.full())
        {
            cout<<"Stack is FULL"<<endl;
        }
        else
        {
            s.push(10);
            cout<<"\nStack contents after a push operation:"<<endl;
        }
        s.display();

        if(s.full())
        {
            cout<<"Stack is FULL"<<endl;
        }
        else
        {
            s.push(20);
            cout<<"\nStack contents after a push operation:"<<endl;
        }
        s.display();

        if(s.full())
        {
            cout<<"Stack is FULL"<<endl;
        }
        else
        {
            s.push(30);
            cout<<"\nStack contents after a push operation:"<<endl;
        }
        s.display();

        if(s.full())
        {
            cout<<"Stack is FULL"<<endl;
        }
        else
        {
            s.push(40);
            cout<<"\nStack contents after a push operation:"<<endl;
        }
        s.display();

        if(s.full())
        {
            cout<<"Stack is FULL"<<endl;
        }
        else
        {
            s.push(50);
            cout<<"\nStack contents after a push operation:"<<endl;
        }
        s.display();

        if(s.full())
        {
            cout<<"Stack is FULL"<<endl;
        }
        else
        {
            s.push(60);
            cout<<"\nStack contents after a push operation:"<<endl;
        }
        s.display();

        if(s.empty())
        {
            cout<<"Stack is EMPTY"<<endl;
        }
        else
        {
            cout<<"Popped out element is:"<<s.pop();
        }
        cout<<"\nStack contents after pop operation: "<<endl;
        s.display();

        if(s.empty())
        {
            cout<<"Stack is EMPTY"<<endl;
        }
        else
        {
            cout<<"Popped out element is:"<<s.pop();
        }
        cout<<"\nStack contents after pop operation: "<<endl;
        s.display();

        if(s.empty())
        {
            cout<<"Stack is EMPTY"<<endl;
        }
        else
        {
            cout<<"Popped out element is:"<<s.pop();
        }
        cout<<"\nStack contents after pop operation: "<<endl;
        s.display();

        if(s.empty())
        {
            cout<<"Stack is EMPTY"<<endl;
        }
        else
        {
            cout<<"Popped out element is:"<<s.pop();
        }
        cout<<"\nStack contents after pop operation: "<<endl;
        s.display();

        if(s.empty())
        {
            cout<<"Stack is EMPTY"<<endl;
        }
        else
        {
            cout<<"Popped out element is:"<<s.pop();
        }
        cout<<"\nStack contents after pop operation: "<<endl;
        s.display();

        if(s.empty())
        {
            cout<<"Stack is EMPTY"<<endl;
        }
        else
        {
            cout<<"Popped out element is:"<<s.pop();
        }
        cout<<"\nStack contents after pop operation: "<<endl;
        s.display();

        return 0;
    }

   //Output:

/*PS D:\Swamini14> cd "d:\Swamini14\" ; if ($?) { g++ stackA.cpp -o stackA } ; if ($?) { .\stackA }

Stack contents after a push operation:
10
------

Stack contents after a push operation:
20
------
10
------

Stack contents after a push operation:
30
------
20
------
10
------

Stack contents after a push operation:
40
------
30
------
20
------
10
------

Stack contents after a push operation:
50
------
40
------
30
------
20
------
10
------
Stack is FULL
50
------
40
------
30
------
20
------
10
------
Popped out element is:50
Stack contents after pop operation: 
40
------
30
------
20
------
10
------
Popped out element is:40
Stack contents after pop operation: 
30
------
20
------
10
------
Popped out element is:30
Stack contents after pop operation: 
20
------
10
------
Popped out element is:20
Stack contents after pop operation: 
10
------
Popped out element is:10
Stack contents after pop operation: 
Stack is EMPTY
*/