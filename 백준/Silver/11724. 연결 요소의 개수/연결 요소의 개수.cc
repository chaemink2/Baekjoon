#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> g(N + 1);
    for (int i = 0; i < M; i++)
    {
        int u, v; cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<char> vis(N + 1, 0);
    int comp = 0;

    for (int i = 1; i <= N; i++)
    {
        if (vis[i]) continue;
        comp++;

        vector<int> st;
        st.push_back(i);
        vis[i] = 1;

        while (!st.empty())
        {
            int x = st.back(); st.pop_back();

            for (int y : g[x]) if (!vis[y])
            {
                vis[y] = 1;
                st.push_back(y);
            }
        }
    }

    cout << comp << '\n';
    return 0;
}