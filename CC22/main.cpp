#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int k=0;k<n;k++)
    {
        int l;
        cin>>l;
        int a[100][100];
        for(int i=1; i<=l; i++)
        {
            for(int j=1; j<=l; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int p=l; p>0; p--)
        {
            for(int q=l; q>0; q--)
            {
                cout<<a[p][q];
                if(p>=2||q>=2)
                    {
                    cout<<" ";
                }
            }

        }
        cout<<endl;
        }


    return 0;
}
