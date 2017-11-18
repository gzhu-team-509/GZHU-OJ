#include <iostream>
using namespace std;

int main()
{
    int count;
    while (cin>>count)
    {
        long sum = 0, temp;
        for (int i=0; i < count; i++){
            cin >> temp;
            sum += temp;
        }
        cout.flags(cout.fixed);
        cout.precision(2);
        cout << (double)sum/count << endl;
    }

    return 0;
}
