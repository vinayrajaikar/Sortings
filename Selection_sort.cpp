#include<iostream>
#include<algorithm>
using namespace std;

void sel_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
            {
                pos=j;
            }
        }

        if(pos!=i)
        {
            swap(a[i],a[pos]);
        }
    }
    
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

int main()
{
    int n,a[100];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Before sorting: "; 
    display(a,n);

    sel_sort(a,n);

    cout<<endl;

    cout<<"After sorting: "; 
    display(a,n);

}