#include<iostream>
#include<algorithm>
using namespace std;

void bubblesort(int a[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);

            }
        }
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
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    bubblesort(a,n);
    cout<<endl;
    
    cout<<"After sorting: "; 
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }


}



