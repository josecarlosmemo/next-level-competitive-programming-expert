#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>

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

int main(int argc, char const *argv[])
{
    _;
    lli n, m;
    cin >> n >> m;

    if (n < m)
    {
        queue<ii> q;
        vector<bool> visited(m + 1, false);

        q.push({n, 0});

        while (!q.empty())
        {
            // 1
            // 2
            ii cur = q.front();
            // visited[cur.f] = true;
            q.pop();

            if (cur.f == m)
            {
                cout << cur.s << ENDL;
                return 0;
            }

            if (cur.f < m && cur.f * 2 <= m + 1)
            {
                if (!visited[cur.f * 2])
                {
                    q.push({cur.f * 2, cur.s + 1});
                    visited[cur.f * 2] = true;
                }
            }
            if (cur.f > 0)
            {
                if (!visited[cur.f - 1])
                {
                    q.push({cur.f - 1, cur.s + 1});
                    visited[cur.f - 1] = true;
                }
            }
        }
    }
    else
    {
        cout << n - m << ENDL;
    }

    return 0;
}
