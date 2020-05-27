#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    double s, u, a, t;
    cin>>u>>a>>t;
    s=(u*t)+(.5*a*t*t);
    printf("%.2lf\n", s);
    return 0;
}
