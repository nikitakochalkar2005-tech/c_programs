#include<stdio.h>
int main()
{
    int a;
    int long long b;
    double  long c;
    long double d;
    printf("Size of int:%zu bytes\n",sizeof(a));
    printf("Size of int long long:%zu bytes\n",sizeof(b));
    printf("Size of double long:%zu bytes\n",sizeof(c));
    printf("Size of long double:%zu bytes\n",sizeof(d));
    return 0;
}