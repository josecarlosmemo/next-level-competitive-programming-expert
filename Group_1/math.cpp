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
    lli t;
    cin >> t;
    fore(i, 0, t)
    {
        lli y;
        cin >> y;

        lli l = 1, r = 3e9;
        while (l <= r)
        {
            lli mid = (l + r) / 2;
            if (mid * (mid + 1) / 2 >= y)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (l * (l + 1) / 2 == y)
        {
            cout << l << ENDL;
        }
        else
        {
            cout << "NAI" << ENDL;
        }
    }

    return 0;
}
