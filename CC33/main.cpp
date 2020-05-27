#include <iostream>

using namespace std;

int main()
{
    int t,f=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,f=1;
        cin>>n;
        for(int j=1;j<=n;j++)
        f=j*f;



    cout<<"Case "<<i<<": "<<f<<endl;
}
    return 0;
}
