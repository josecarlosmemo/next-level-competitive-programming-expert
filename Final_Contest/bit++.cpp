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
    lli n; // Number of statements
    cin >> n;
    lli x = 0;

    while (n--)
    {
        string s;
        cin >> s;

        lli len = s.size();

        for (int i = 0; i < len; i++)
        {
            if (i + 1 < len && s[i] == '+' && s[i + 1] == '+')
            {
                x++;
                i++;
            }
            else if (i + 1 < len && s[i] == '-' && s[i + 1] == '-')
            {
                x--;
                i++;
            }
        }
    }
    cout << x << endl;
    return 0;
}
