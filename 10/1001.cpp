#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    while (n--)
    {
        string a, b;
        
        cin >> a;
        b.resize(a.size(), '\0');

        int length = a.size();
        int sign = 0, index = 0, count = 0;
        for (int i = 0; i < length; i++)
        {
            if (a[i] == '!') sign++;
            else
            {
                if (sign % 2)
                {
                    if (isupper(a[i])) b[index++] = tolower(a[i]);
                    else b[index++] = toupper(a[i]);
                }
                else b[index++] = a[i];
                count++;
            }
        }
        b.resize(count);        // 如不重新调整size()会导致string中多余的空字符一并输出
        cout << b << endl;
    }
}
