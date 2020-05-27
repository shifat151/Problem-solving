#include <iostream>

using namespace std;

int main()
{
    int a,b,i,j;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>b;
    int k=0;
        for(j=b;j>=0;j--){
            if(j%3==0){
             k++;
            }
        }
        cout<<"Case "<<i+1<<": "<<k<<endl;
    }

    return 0;
}
