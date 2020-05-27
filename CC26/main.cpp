#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;++i){
        double m,n,r,c,d,x,y;
        cin>>r>>m>>n>>c>>d;
        double dist;
        x=(m-c)*(m-c);
        y=(n-d)*(n-d);
        dist=sqrt(x+y);
        if(dist<r){
            cout<<"Case "<<i<<": "<<"YES"<<endl;

        }
        else{
            cout<<"Case "<<i<<": "<<"NO"<<endl;
        }

    }
    return 0;
}
