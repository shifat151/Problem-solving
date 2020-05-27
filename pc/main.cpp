#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int n,temp,i,j;

        cin>>n;
        int Arr[n];
        for(i=0; i<n; i++)
        {
            cin>>Arr[i];
        }

        for(i=0,j=n-1; i<n/2; i++,j--)
        {
            temp=Arr[i];
            Arr[i]=Arr[j];
            Arr[j]=temp;
        }

        for(i=0; i<n-1; i++)
        {
            cout<<Arr[i];
            cout<<" ";

        }
        cout<<Arr[i];

        cout<<endl;
    }

    return 0;
}
