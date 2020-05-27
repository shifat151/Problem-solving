#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int a,b;
        cin>>a>>b;
        int arr[150][150];
        for(int k=1;k<=a;k++){
            for(int j=1;j<=b;j++){
                cin>>arr[k][j];
            }
        }
        int p,q,y=0;
        int x;
        cin>>x;
                for(p=1;p<=a;p++){
            for(q=1;q<=b;q++){

                if(x==arr[p][q]){
                        y++;
                    break;

                }

            }
              if(y!=0)
                    break;
                }
                if(y==0){
                    cout<<"Case "<<i<<": "<<"Not Found!"<<endl;
                }
                else{
                    cout<<"Case "<<i<<": "<<p<<" "<<q<<endl;
                }
    }
    return 0;
}
