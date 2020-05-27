#include <iostream>

using namespace std;

int main()
{
    int T,k;
    cin>>T;
    for(int i=1;i<=T;i++){
         int arr[2000];
        int n;
        cin>>n;
        for(int j=1;j<=n;j++){
            cin>>arr[j];

        }
    for(k=n;k>1;k--){
        cout<<arr[k];
        cout<<" ";
    }
    cout<<arr[k]<<endl;



    }
    return 0;


}
