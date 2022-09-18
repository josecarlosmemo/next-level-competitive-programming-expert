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
    lli n;
    cin >> n;
    lli count = 0;

    lli m = n;

    while (n > 0)
    {
        // deb(n);
        if (n % 10 == 0)
        {
            n /= 10;
            continue;
        }

        if (m % (n % 10) == 0)
        {
            // deb(n % 10);

            count++;
        }
        n /= 10;
    }
    cout << count << endl;

    return 0;
}
