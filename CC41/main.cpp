#include <iostream>

using namespace std;

#include <conio.h>

void merge(int *,int, int , int,int );

void mergesort(int *a, int low, int high,int v)

{

    int mid;

    if (low < high)

    {

        mid=(low+high)/2;

        mergesort(a,low,mid,v);

        mergesort(a,mid+1,high,v);

        merge(a,low,high,mid,v);

    }

    return;

}

void merge(int *a, int low, int high, int mid, int v)

{

    int i, j, k, c[50];

    i = low;

    k = low;

    j = mid + 1;
    if(v==1){

    while (i <= mid && j <= high)

    {

        if (a[i] > a[j])

        {

            c[k] = a[i];

            k++;

            i++;

        }

        else

        {

            c[k] = a[j];

            k++;

            j++;

        }

    }
    }
    if(i==2){


     while (i <= mid && j <= high)

    {

        if (a[i] < a[j])

        {

            c[k] = a[i];

            k++;

            i++;

        }

        else

        {

            c[k] = a[j];

            k++;

            j++;

        }


    }


    }

    while (i <= mid)

    {

        c[k] = a[i];

        k++;

        i++;

    }

    while (j <= high)

    {

        c[k] = a[j];

        k++;

        j++;

    }

    for (i = low; i < k; i++)

    {

        a[i] = c[i];

    }

}


int main()

{
    int tc;
    for(int z=1;z<=tc;z++){
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[n];
    }
    int v;
    cin>>v;

    mergesort(a, 0, n,v);

    cout<<"sorted array\n";

    for (int i = 0; i < n; i++)

    {

        cout<<a[i];

    }


    }
    getch();

}
