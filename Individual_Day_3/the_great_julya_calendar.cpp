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

lli get_max_digit(set<lli> &s, lli n)
{
    s.clear();
    while (n > 0)
    {
        s.insert(n % 10);
        n /= 10;
    }
    return *s.rbegin();
}

int main(int argc, char const *argv[])
{
    _;
    lli n;
    cin >> n;
    set<lli> digits;

    lli count = 0;

    while (n > 0)
    {
        lli max_digit = get_max_digit(digits, n);
        n -= max_digit;
        count++;
    }
    cout << count << ENDL;

    return 0;
}
