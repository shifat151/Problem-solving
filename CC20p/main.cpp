
    #include<iostream>
    #include<stdio.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        for(int k=1;k<=t;k++){
    int N;
    cin>>N;
    int x;
    int i, j;
   for (i = 1; i <= 4; i++) {

      for (j = 1; j <= N*9; j++) {
         if (i == 1|| i == 4|| j==1 || j ==9)
            printf("*");
            if(i==2||i==3){
                for(x=N;x>0;x--){
                    if(j==9*x||j==(10*x)-x){
                        cout<<"*";
                    }
                }
            }
         else
            printf(" ");

      }
      cout<<endl;
   }
        }




 return (0);
    }
