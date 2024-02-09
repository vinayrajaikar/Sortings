#include<iostream>
#include<algorithm>
using namespace std;

void merge(int a[],int low,int mid,int high)
{
    int i,j,h,k,b[high+1];
    i=low,j=mid+1,k=low;
    while (i<=mid && j<=high)
    {
       if(a[i]<a[j])
       {
            b[k++]=a[i++];
       }

       else
       {
            b[k++]=a[j++];
       }
    }

    if(i>mid)
    {
        for(int m=j;m<=high;m++)
            b[k++]=a[m];
    }
    else
    {
        for(int m=i;m<=mid;m++)
            b[k++]=a[m];
    }

    for(int i=low;i<=high;i++)
        a[i]=b[i];
  
    
}

void Mergesort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        Mergesort(a,low,mid);
        Mergesort(a,mid+1,high);
        merge(a,low,mid,high);
        return;

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

    Mergesort(a,0,n-1);
    cout<<endl;

    cout<<"After sorting: "; 
    display(a,n);


}