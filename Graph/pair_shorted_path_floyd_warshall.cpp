#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
int n, e, q;
long long adj_matrix[505][505];

void floyd_warshall() {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj_matrix[i][k] < INF && adj_matrix[k][j] < INF) {
                    adj_matrix[i][j] = min(adj_matrix[i][j], adj_matrix[i][k] + adj_matrix[k][j]);
                }
            }
        }
    }
}

int main() {
    cin >> n >> e >> q;

    // Initialize adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==j){
                adj_matrix[i][j]=0;
            }
            else{
                adj_matrix[i][j]=INF;
            }
        }
    }

    // Read edges
    while (e--) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        a--; b--;
        adj_matrix[a][b] = min(adj_matrix[a][b], c);
        adj_matrix[b][a] = min(adj_matrix[b][a], c);
    }

    floyd_warshall();

    // Answer queries
    while (q--)
    {
        int di, dj;
        cin >> di >> dj;
        di--;
        dj--;
        if (adj_matrix[di][dj] == INF)
            cout << "-1\n";
        else
            cout << adj_matrix[di][dj] << "\n";
    }

    return 0;
}
