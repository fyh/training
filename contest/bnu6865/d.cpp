# include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

const int maxn = 505;

int n, m;
bool lk[maxn][maxn];
int mk[maxn];
bool vis[maxn];

bool dfs(int cur) {
    for (int i = 1; i <= n; ++i) {
        if (lk[cur][i] && !vis[i]) {
            vis[i] = true;
            if (mk[i] == 0 || dfs(mk[i])) {
                mk[i] = cur;
                return true;
            }
        }
    }
    return false;
}

int solve() {
    memset(mk, 0, n+1);
    int tmp = 0;
    for (int i = 1; i <= n; ++i) {
        memset(vis, false, n+1);
        if (dfs(i)) ++tmp;
    }
    return tmp/2;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    while (cin >> n >> m) {
        for (int i = 1; i <= n; ++i) {
            memset(lk[i]+1, false, n);
        }
        for (int i = 0; i < m; ++i) {
            int u, v; cin >> u >> v;
            lk[u][v] = true;
            lk[v][u] = true;
        }

        cout << solve() << endl;
    }

    return 0;
}
