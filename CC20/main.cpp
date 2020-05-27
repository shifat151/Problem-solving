#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

        int num;
        cin>>num;
        int i,j,k,l,m,n;
        for(i=1; i<=num; i++)
        {
            for(k=num-i; k>0; k--)
            {
                cout<<" ";
            }
            for(j=1; j<2*i; j++)
            {
                cout<<"*";
            }
            cout<<endl;

        }

        for(l=num-1;l>=1;l--){
                for(n=1;n<=num-l;n++){
                    cout<<" ";
                }
            for(m=1;m<=2*l-1;m++){
                cout<<"*";
            }
            cout<<endl;
        }
        if(tc>0)
            cout<<endl;
    }

}
