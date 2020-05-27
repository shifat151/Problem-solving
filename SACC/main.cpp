#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int k=1; k<=T; k++)
    {
        int n;
        int a[80][80];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        int t=0,b=n-1,l=0,r=n-1,dir=0;
        cout<<"Case "<<k<<": ";
        while(t<=b&&l<=r)
        {
            if(dir==0)
            {
                for(int i=l; i<=r; i++)
                {

                    cout<<a[t][i];
                if(t!=b||r!=l){
                        cout<<" ";
                    }
                }


                t++;
                dir=1;
            }
            else if(dir==1)
            {
                for(int i=t; i<=b; i++)
                {
                    cout<<a[i][r];
                    if(t!=b||r!=l){
                        cout<<" ";
                    }
                }
                r--;
                dir=2;
            }
            else if(dir==2)
            {
                for(int i=r; i>=l; i--)
                {
                    cout<<a[b][i];
                    if(t!=b||r!=l){
                        cout<<" ";
                    }
                    }


                b--;
                dir=3;
            }
            else if(dir==3)
            {
                for(int i=b; i>=t; i--)
                {
                    cout<<a[i][l];
                    if(t!=b||r!=l){
                        cout<<" ";
                    }
                }
                l++;
                dir=0;
            }


        }
        cout<<endl;
    }
    return 0;

}




