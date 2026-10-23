#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int first,last,mid;

    first=0;
    last=n-1;

    while(first<=last)
    {
        mid=(first+last)/2;

        if(a[mid]==x) return(mid);
        else if(a[mid]<x) first=mid+1;
        else last=mid-1;
    }
    return(-1);

}
int main()
{
    int n;
    int a[20];
    cout<<"\nEnter the size of the array:";
    cin>>n;

    cout<<"\nEnter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"\nEnter the target element to search for:";
    cin>>x;
    int location=binary_search(a,n,x);
    
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


//Output:
PS D:\Swamini14> cd "d:\Swamini14\" ; if ($?) { g++ binary.cpp -o binary } ; if ($?) { .\binary }

Enter the size of the array:5

Enter 5 elements: 12 34 45 56 67

Enter the target element to search for:45

Element 45 found in the array at location 2

