#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        long long n;
        cin>>n;
        int a[n];
        for(int j=1;j<=n;j++){
            cin>>a[j];
        }
        int p;
        cin>>p;
        for(int k=1;k<=n;k++){
          if(p==a[k]){
            cout<<"Case "<<i<<": "<<k<<endl;
          }



        }

    }
    return 0;
}
