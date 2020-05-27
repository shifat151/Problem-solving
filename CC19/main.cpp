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
        int i,j,k;
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
        if(tc>0)
            cout<<endl;
    }

}
