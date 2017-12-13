#include <cstdio>
#include <map>
using namespace std;

int matrix[40][40];

int main()
{
    int t;
    scanf("%d", &t);

    for (int kase = 1; kase <= t; kase++)
    {
        int n;
        scanf("%d", &n);
        
        bool ok = true;

        // 在输入数独矩阵的同时判断行是否满足条件
        for (int i = 1; i <= n * n; i++)
        {
            map<int, int> row;
            for (int j = 1; j <= n * n; j++)
            {
                scanf("%d", &matrix[i][j]);
                row[matrix[i][j]]++;
            }
            int checksum = 1;
            for (int k = 1; k <= n * n; k++) checksum *= row[k];
            if (checksum != 1) ok = false;
        }

        // 判断列是否满足条件
        if (ok) for (int i = 1; i <= n * n; i++)
        {
            map<int, int> col;
            for(int j = 1; j <= n * n; j++)
            {
                col[matrix[j][i]]++;
            }
            int checksum = 1;
            for (int k = 1; k <= n * n; k++) checksum *= col[k];
            if (checksum != 1) {
                ok = false; 
                break;
            }
        }

        // 判断小矩阵是否满足条件
        if (ok)
        {
            int row = 1, col = 1;
            while (row <= n * n)
            {
                map<int, int> rect;
                for (int j = 0; j < n; j++)
                {
                    for (int k = 0; k < n; k++)
                    {
                        rect[matrix[row + j][col + k]]++;
                    }
                }
                int checksum = 1;
                for (int k = 1; k <= n * n; k++) checksum *= rect[k];
                if (checksum != 1) {
                    ok = false;
                    break;
                }

                col += n;
                if (col > n * n) col = 1, row += n;
            }
        }

        if (ok) printf("Case #%d: Yes\n", kase);
        else printf("Case #%d: No\n", kase);
    }
}
