#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a,b,c,d,e;
    double avg;
    cin>>a>>b>>c>>d>>e;
    avg=(double)(a+b+c+d+e)/5;
    printf("%.2lf\n", avg);
    return 0;
}
