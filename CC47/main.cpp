#include <iostream>

using namespace std;

int main()
{
    int T,j;
    cin>>T;
    for(j=1;j<=T;j++){
    int amount,num,f=0;
    cin>>amount;
    for(int i=5;i>0;i--){
        if(i<=amount){
            num=amount/i;
            f=f+num;
            amount-=num*i;
        }
    }
    cout<<f<<endl;
    }
    return 0;
}
