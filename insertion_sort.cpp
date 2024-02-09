#include<iostream>
#include<algorithm>
using namespace std;

void inser_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;

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
    
    inser_sort(a,n); 
    cout<<endl;

    cout<<"After sorting: "; 
    display(a,n);

}