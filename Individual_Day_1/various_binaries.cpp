#include <vector>
#include <iostream>

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
    lli n;
    cin >> n;
    vi a(n);
    fore(i, 0, n) cin >> a[i];
    lli k;
    cin >> k;
    vi q(k);
    fore(i, 0, k) cin >> q[i];

    for (auto query : q)
    {
        lli l = 0, r = n - 1;
        while (l <= r)
        {
            lli mid = (l + r) / 2;
            if (a[mid] == query)
            {
                cout << 1 << ENDL;
                break;
            }
            else if (a[mid] < query)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (l > r)
        {
            cout << 0 << ENDL;
        }
    }

    return 0;
}
