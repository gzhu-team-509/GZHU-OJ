#include <iostream>
using namespace std;

int main()
{
    string str;
    int t; cin >> t;
    while (t--)
    {
        cin >> str;
        for (int size = str.size() / 2; size; size--)
        {
            for (int i = 0; i + size + size <= str.size(); i++)
            {
                string src = str.substr(i, size);
                string dst = str.substr(i + size);
                int match = dst.find(src);
                if (match != -1)
                {
                    cout << size << endl;
                    goto finishing;
                }
            }
        }

        failure: cout << "0" << endl; continue;
        finishing: continue;
    }
}
