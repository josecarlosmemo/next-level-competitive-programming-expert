#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

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
    lli t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        lli a, b, c;
        cin >> a >> b >> c;

        double l = 0, r = 1e10;
        while (r - l > 1e-6)
        {
            // r 1e10
            // 0 + 1e10 / 2 = 5e9
            double mid = (l + r) / 2;
            if (a * mid + b * sin(mid) < c)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        cout << setprecision(6) << fixed << l << ENDL;
    }

    return 0;
}
