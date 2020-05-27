#include <iostream>

using namespace std;

int main()
{
    int L;
    cin>>L;
    if(L%4==0){
        if(L%100==0){
            if(L%400==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
