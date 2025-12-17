#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visit[1005][1005];
pair<int,int> parent[1005][1005];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int m,n;

bool valid(int i, int j)
{
    if (i < 0 || i >= m || j < 0 || j >= n)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int pi = par.first;
        int pj = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = pi + v[i].first;
            int cj = pj + v[i].second;
            if (valid(ci, cj) && !visit[ci][cj] && (grid[ci][cj]=='.' || grid[ci][cj]=='D'))
            {
                q.push({ci, cj});
                visit[ci][cj] = true;
                parent[ci][cj] = {pi, pj};
            }
        }
    }
}

int main()
{

    cin >> m>> n;

    int si, sj, di, dj;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }


    memset(visit, false, sizeof(visit));
    memset(parent,-1,sizeof(parent));

    bfs(si, sj);
    if(!visit[di][dj]){
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j <n; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }  
        return 0;
    }

        int node_i = di, node_j = dj;
        while (!(node_i==si && node_j==sj))
        {
            if(grid[node_i][node_j]!='D')
                grid[node_i][node_j]='X';
            int pi=parent[node_i][node_j].first;
            int pj=parent[node_i][node_j].second;
            node_i=pi,node_j=pj;
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j <n; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }

    return 0;
}
