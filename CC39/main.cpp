#include <iostream>

using namespace std;

int main()
{
    int T,i;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        int n,l,k,temp,f;

        cin>>n;
        int a[1500];
        for(f=0; f<n; f++)
        {
            cin>>a[f];
        }
        for(k=1; k<=n-1; k++)
        {
            temp=a[k];
            l=k-1;
            while(temp>a[l]&&l>=0)
            {
                a[l+1]=a[l];
                l=l-1;

            }
            a[l+1]=temp;
        }
        cout<<"Case "<<i<<":"<<endl;
        for(int x=0; x<n-1; x++)
        {
            cout<<a[x]<<" ";
        }
        cout<<a[n-1]<<endl;


    }
    return 0;
}
