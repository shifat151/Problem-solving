#include <iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    system("color B5");
    int a,b,c,d;
    double x,y,z;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    x=(double)(-b+sqrt(d))/(2*a);
    y=(double)(-b-sqrt(d))/(2*a);
    printf("%.2lf\n", x);
    printf("%.2lf\n", y);
    return 0;
}
