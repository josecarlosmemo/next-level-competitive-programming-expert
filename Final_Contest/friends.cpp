#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
#include <set>

#define f first
#define s second
#define fore(i, a, b) for (int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) s.begin(), s.end()
#define _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(s) int(s.size())
#define ENDL '\n'

using namespace std;

typedef long double ld;
typedef long long lli;
typedef pair<lli, lli> ii;
typedef vector<lli> vi;

#define deb(x) cout << #x << ": " << (x) << endl;
// ---------

void dfs(lli currNode, vector<vi> &adjList, vector<bool> &visited, lli &count)
{
    count++;

    visited[currNode] = true;
    for (int nextNode : adjList[currNode])
    {
        if (!visited[nextNode])
        {
            dfs(nextNode, adjList, visited, count);
        }
    }
}

int main(int argc, char const *argv[])
{
    lli n, m;
    cin >> n >> m;
    vector<vi> adj(n);
    fore(i, 0, m)
    {
        lli a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<bool> visited(2e5, false);
    vi counts;
    for (int i = 0; i < n; i++)
    {
        lli count = 0;

        if (!visited[i])
        {

            dfs(i, adj, visited, count);
            counts.pb(count);
        }
    }

    sort(all(counts));
    cout << counts.back() << ENDL;

    return 0;
}
