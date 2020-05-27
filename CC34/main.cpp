#include <iostream>

using namespace std;
int fact(long long n,int i){

    if(n%2==0){
        ++i;
        fact(n/2,i);
    }
    else{
        return i;
    }

}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long n;
        int b;
        cin>>n;
        b=fact(n,0);

        if(b%2==0)
        {
            cout<<"Chicken First!"<<endl;


        }
        else
        {
            cout<<"Egg First!"<<endl;

        }



    }
    return 0;
}
