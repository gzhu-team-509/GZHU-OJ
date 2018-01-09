#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string s1, s2, s3, s4;
    cin>> s1 >> s2;
    s3 = s1;
    s4 = s2;    
    for(int i=0; i<s1.length(); i++)
        {
         s3[i] = tolower(s1[i]);
        }
    for(int j=0; j<s2.length(); j++)
        {
         s4[j] = tolower(s2[j]);
        }        
    


    if(s4.compare(s3)==0) cout<<"0"<<endl;
    if(s4.compare(s3)>0) cout<<"-1"<<endl;
     if(s4.compare(s3)<0) cout<<"1"<<endl;
}