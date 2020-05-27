#include<iostream>
#include<algorithm>
using namespace std;
int arr[10000],store[10000],n,index=0;
void for_ordering(int div,int i)
{
  if(n==i)
  return;
  if(arr[i]%div==0)
    {
      store[index]=arr[i];
      arr[i]=-1;
        index++;
    }
    for_ordering(div,i+1);
}
int main()
{
  int T;
  cin>>T;
  for(int i=0;i<T;i++)
  {
    cin>>n;
    for(int j=0;j<n;j++)
    cin>>arr[j];
    int j=n;
    while(j>=2)
    {
      index=0;
      for_ordering(j,0);
      sort(store,store+index,greater<int>());
      for(int k=0;k<index;k++)
      cout<<store[k]<<" ";
    if(j==3)
        j=2;
      else if(j==5)
      j=3;
      else
      j=0;
    }
    int k=0;
    for(int j=0;j<n;j++)
   {
       if(arr[j]!=-1)
        {
          store[k]=arr[j];
          k++;
        }
    }
    sort(store,store+k,greater<int>());
    for(int j=0;j<k;j++)
    {
      cout<<store[j];
      if(j<k-1)
      cout<<" ";
      else
      cout<<endl;
    }
  }
  return 0;
}
