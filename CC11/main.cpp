#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    double F;
    F=(double)(c * 9) / 5 + 32;
    if(F>98.4){
        cout<<"Fever"<<endl;
    }
    else{
        cout<<"Not fever"<<endl;
    }
    return 0;
}
