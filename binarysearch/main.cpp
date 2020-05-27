
#include<iostream>
#include<new>

using namespace std;
int search(int *a,int n,int e)
{
    int f,l,m;
    f=0;
    l=n-1;

    while(f<=l)
    {
        m=(f+l)/2;
        if(e==a[m]){
            return(5);
        }
        else{
            if(e>a[m]){
                f=m+1;
            }
            else
            l=m-1;
     }

    }

    return 0;
}
int main()
{
    int tc;
    cin>>tc;
    for(int d=1;d<=tc;d++){
    int n,i,e,res;
    cin>>n;
    int *ptr=new int[n];
    if (ptr == NULL){
    cout << "Error: memory could not be allocated"<<endl;
    return(1);
    }
    else{
    for(i=0;i<n;++i)
    {
        cin>>ptr[i];
    }
    }

    cin>>e;

    res=search(ptr,n,e);

    if(res!=0){
        cout<<"Case "<<d<<": "<<"Found."<<endl;
        }
    else
        cout<<"Case "<<d<<": "<<"Not Found."<<endl;
        delete[] ptr;
    }
    return 0;
}


