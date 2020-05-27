
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int LCSLength(string X,string Y);

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {

    string first,second;
    cin>>first;
    cin>>second;
    int LCS;

    LCS = LCSLength(first,second);
    cout <<"Case "<<i<< ": " << LCS << endl;
    }
    return 0;
}

int LCSLength(string X,string Y)
{
    int m = X.size();
    int n = Y.size();
    int L[m+1][n+1];
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 || j==0)
                L[i][j] = 0;
            else if(X[i-1]==Y[j-1])
                L[i][j] = L[i-1][j-1]+1;
            else
                L[i][j] = max(L[i-1][j],L[i][j-1]);
        }
    }
    return L[m][n];
}
