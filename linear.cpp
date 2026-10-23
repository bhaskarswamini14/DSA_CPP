#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return(-1);

}
int main()
{
    int n;
    int a[20];
    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"\nEnter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"\nEnter the target element to search for:";
    cin>>x;
    int location=linear_search(a,n,x);
    
    if(location!=-1)
    {
        cout<<"\nElement "<<x<<" found in the array at location "<<location<<endl;

    }
    else
    {
        cout<<"\nElement "<<x<< " not found in the array"<<endl;

    }
    return 0;


}

//output:
PS D:\Swamini14> cd "d:\Swamini14\" ; if ($?) { g++ linear.cpp -o linear } ; if ($?) { .\linear }
Enter the size of the array:5

Enter 5 elements: 
11
22
33
44
55

Enter the target element to search for:11

Element 11 found in the array at location 0
PS D:\Swamini14> 
