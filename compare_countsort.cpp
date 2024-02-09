#include<iostream>
#include<algorithm>
using namespace std;

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    
}

void countsort(int a[],int n)
{
    int count[100],b[100];
    for(int i=0;i<n;i++)
        count[i]=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
                count[j]=count[j]+1;
            
            else
                count[i]=count[i]+1;
        }
    }

    for(int i=0;i<n;i++)
        b[count[i]]=a[i];

    for(int i=0;i<n;i++)
        a[i]=b[i];      

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
    countsort(a,n);
    cout<<endl;

    cout<<"After sorting: "; 
    display(a,n);



}