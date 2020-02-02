#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int a, b,*c,*d,sum=0,sub=0;
    cin>>a>>b;
    c=&a;
    d=&b;
    sum=*c + *d;
    sub=abs(*c - *d);
    cout<<sum<<endl;
    cout<<sub;
    return 0;
}


