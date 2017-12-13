#include <iostream>
using namespace std;

string a, b;

int main()
{
    while (cin >> a >> b)
    {
        bool dna = false, rna = false;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'A')
            {
                if (b[i] == 'T') dna = true;
                else rna = true;
            }
            if (a[i] == 'T')
            {
                if (b[i] == 'A') dna = true;
                else rna = true;
            }
            if (a[i] == 'U') rna = true;
            if (dna || rna) break;
        }
        if (dna) cout << "DNA" << endl;
        else if (rna) cout << "RNA" << endl;
        else cout << "I don't know" << endl;
    }
}
