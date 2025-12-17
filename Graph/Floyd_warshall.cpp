#include <bits/stdc++.h>
using namespace std;
int n, e;
int adj_martix[105][105];

void floyd_warshall(){
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj_martix[i][k] != INT_MAX && adj_martix[k][j] != INT_MAX && (adj_martix[i][k] + adj_martix[k][j] < adj_martix[i][j]))
                {
                    adj_martix[i][j] = adj_martix[i][k] + adj_martix[k][j];
                }
            }
        }
    }
}

int main()
{
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adj_martix[i][j] = 0;
            }
            else
            {
                adj_martix[i][j] = INT_MAX;
            }
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_martix[a][b] = c;
    }

    floyd_warshall();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj_martix[i][j] == INT_MAX)
            {
                cout << "INF" << " ";
            }
            else
            {
                cout << adj_martix[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}