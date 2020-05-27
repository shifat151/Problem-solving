#include <iostream>

using namespace std;

int main()
{
    int i,a,b;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        cout<<a;
        if(i<b){
        cout<<" ";
        }
        else{
            cout<<endl;
        }
        a++;
}

    return 0;
}
