#include <iostream>
using namespace std;

int main()
{
    long input;
    long reverse, origin;
    while (cin>>input)
    {
        reverse = 0;
        origin = input;
        while (input)
        {
            reverse = reverse * 10 + input % 10;
            input /= 10;
        }
        if (origin==reverse) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
