#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
//long long gcd(long long a,long long b);
int main()
{
    long long a, b, x;
    while(cin>>a>>b)
    { 
   // while(scanf("%lld%lld",&a,&b)==2)
   // {
    //    long long result;
  //      result=gcd(a,b);
      //  printf("%lld\n",result);
         while(x)
         {
             x=a%b;
             a=b;
             b=x;
         }
         cout<<a<<endl;
    }

}
//long long gcd(long long a,long long b)
//{
  //  return (b==0)?a:gcd(b,a%b);
//}
