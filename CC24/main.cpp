#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    for(int n=1; n<=c; n++)
    {
        int a,b;
        long long fact=1,d=1;
        cin>>a>>b;

        for(int i=1;i<=a;i++){
            fact=fact*i;
        }
        int y=a-b;
        for(int j=1;j<=y;j++){
            d=d*j;
        }
        long long e=fact/d;

        cout<<"Case "<<n<<": "<<e<<endl;
    }
    return 0;
}
