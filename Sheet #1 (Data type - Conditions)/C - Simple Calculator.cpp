#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y;
    long long m,a,b;
    cin>>x>>y;
    m = x * y;
    a = x + y;
    b = x - y;

    cout<< x << " + "<< y <<" = " << a <<endl;
    cout<< x << " * "<< y <<" = " << m <<endl;
    cout<< x << " - "<< y <<" = " << b <<endl;
}
