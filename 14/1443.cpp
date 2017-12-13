#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, num[500];
    while (cin >> n)
    {
        if (!n) break;
        for (int i = 0; i < n; i++) cin >> num[i];
        
        int q, action;
        cin >> q;
        while (q--) 
        {
            cin >> action;
            switch (action)
            {
                case 1:
                {
                    for (int i = 0; i < n; i++) num[i] = abs(num[i]);
                    break;
                }
                case 2:
                {
                    int total = 0;
                    for (int i = 0; i < n; i++) total += num[i];
                    cout << total << endl;
                    break;
                }
                case 3:
                {
                    int result = 1;
                    bool has_odd = false;
                    for (int i = 0; i < n; i++) {
                        if (num[i] % 2) {
                            has_odd = true;
                            result *= num[i];
                        }
                    }
                    has_odd ? (cout << result << endl) : (cout << 0 << endl);
                    break;
                }
            }
        }
    }
}
