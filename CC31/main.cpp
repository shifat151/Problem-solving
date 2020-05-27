#include <iostream>
#include<string>

using namespace std;
void name(){

            string str;
        getline(cin,str);
        cout<<str.size()<<endl;
        cout<<str<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    name();
    }
    return 0;
}
