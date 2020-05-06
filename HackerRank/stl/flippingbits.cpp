#include<iostream>
using namespace std;
long flippingBits(long n) {
    long z;
    z=n^4294967295;
    return z;
}
int main()
{
    unsigned long x,y;
    cin>>x;
    y=flippingBits(x);
    cout<<y;
    return 0;
}