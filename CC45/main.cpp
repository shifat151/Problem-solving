#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;



int lis( int arr[], int n )
{
	int *lis, i, j, max = 0;
	lis = (int*) malloc ( sizeof( int ) * n );


	for (i = 0; i < n; i++ )
		lis[i] = 1;

	for (i = 1; i < n; i++ )
		for (j = 0; j < i; j++ )
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;


	for (i = 0; i < n; i++ )
		if (max < lis[i])
			max = lis[i];


	free(lis);

	return max;
}


int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
	int n,arr[1000];
	cin>>n;
	for(int j=0;j<n;j++){
        cin>>arr[j];
	}
	cout<<lis(arr,n)<<endl;
    }
	return 0;
}
