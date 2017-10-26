#include <iostream>
#include <string>
using namespace std;

string s;
char alphabet[26];

int main()
{
    while (cin >> s)
    {
        for (int i = 0; i < 26; i++)
        {
            alphabet[i] = i + 'a';
        }
        
        int n = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (s[i] == alphabet[j])
                {
                    alphabet[j] = ' ';
                    n++;
                }
            }
        }
        if (n % 2) cout << "IGNORE HIM!" << endl;
        else cout << "CHAT WITH HER!" << endl;
    }
}
