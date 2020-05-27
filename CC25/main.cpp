#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    for(int d=1; d<=c; d++)
    {
        int n,p=0;
        cin>>n;
        for(int i=2; i<=(n/2); ++i)
        {
            if(n%i==0)
            {
                p++;
                break;
            }
        }
        if(p==0)
        {
            cout<<"Case "<<d<<": "<<"YES"<<endl;
        }
        else
        {
            cout<<"Case "<<d<<": "<<"NO"<<endl;
        }

    }
    return 0;
}
