#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        string dithered;
        cin >> dithered;

        int x, y;
        cin >> x >> y;

        string img = "";
        string tmp;
        while (y--)
        {
            cin >> tmp;
            img += tmp;
        }

        int cnt = 0;
        int length = img.length();
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < dithered.length(); j++)
            {
                if (dithered[j] == img[i]) {
                    cnt++;
                    break;
                }
            }
        }

        cout << cnt << endl;
    }
}
