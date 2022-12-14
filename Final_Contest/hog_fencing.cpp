#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <cmath>

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
    double n;
    cin >> n;
    double div = n / 4;

    if (div - int(div) == 0)
    {
        cout << div * div << endl;
    }
    else if (div - int(div) >= 0.5)
    {

        cout << lli(int(div + 1) * int(div)) << endl;
    }
    else
    {
        cout << lli(int(div) * int(div)) << endl;
    }

    return 0;
}
