#include <iostream>
#include <cctype>
using namespace std;

string s;
bool inword;
int word;

int main()
{ 
    // 注意到 cin >> s 会把换行符留在输入流中
    while (getline(cin, s))
    {
        getline(cin, s);
        inword = false;
        word = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                if (inword) continue;
                else 
                {
                    inword = true;
                    word++;
                }
            }
            if (isspace(s[i]) || ispunct(s[i]))
            {
                inword = false;
            }
        }
        cout << word << endl;
    }
}
