#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    long long a, b, x;
    while (cin>>a>>b) {
        do
        {
           x=a%b;
           a=b;
           b=x;
        }
        while (x);
        cout<<a<<endl;
    }
}
