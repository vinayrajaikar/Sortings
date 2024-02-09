#include<iostream>
#include<algorithm>
using namespace std;

int findpivot(int a[],int left,int right)
{
    int pivot=a[left];
    int i=left,j=right+1;
    do{
            do{
                i=i+1;
              }while(a[i]<pivot && i<=right);

            do{
                j=j-1;
              }while(a[j]>pivot && j>=left);

            if(i<j)
            {
                swap(a[i],a[j]);
            }

      }while(i<j);

      swap(a[left],a[j]);
      return j;



}

void qsort(int a[],int low,int high)
{
    int pivot;
    if(low<high)
    {
        pivot=findpivot(a,low,high);
        qsort(a,low,pivot-1);
        qsort(a,pivot+1,high);
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

    qsort(a,0,n-1);

    cout<<endl;

    cout<<"After sorting: "; 
    display(a,n);


}