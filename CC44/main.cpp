#include <iostream>

using namespace std;

int main()
{
    int T,j;
    cin>>T;
    for(j=1; j<=T; j++)
    {
        int n;
        long long r,f=0,s=1;
        cin>>n;
        if(n==1||n==2)
        {
            r=1;
        }
        else
        {
            for(int i=0; i<=n-2; i++)
            {
                r=f+s;
                f=s;
                s=r;
            }

        }
        cout<<r<<endl;
    }
            return 0;
    }
