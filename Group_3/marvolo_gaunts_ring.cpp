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

int main(int argc, char const *argv[])
{
    _;
    lli n, p, q, r;
    cin >> n >> p >> q >> r;
    vector<vi> dp(n, vi(3, -1));

    for (int i = 0; i < n; i++)
    {
        lli a;
        cin >> a;
        if (i == 0)
        {
            dp[i][0] = a * p;
            dp[i][1] = dp[i][0] + a * q;
            dp[i][2] = dp[i][1] + a * r;
        }
        else
        {
            dp[i][0] = max(dp[i - 1][0], a * p);
            dp[i][1] = max(dp[i - 1][1], dp[i][0] + a * q);
            dp[i][2] = max(dp[i - 1][2], dp[i][1] + a * r);
        }
    }

    cout << dp[n - 1][2] << ENDL;

    return 0;
}
