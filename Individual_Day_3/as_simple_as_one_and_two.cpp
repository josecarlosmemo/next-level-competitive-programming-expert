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
    lli t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<lli> res;

        for (int i = 0; i < s.size(); i++)
        {
            // if (i + 4 < s.size() && s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o' && s[i + 3] == 'n' && s[i + 4] == 'e')
            // {
            //     res.pb(i + 2);
            //     i += 4;
            // }
            if (i + 2 < s.size() && s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o')
            {
                res.pb((s[i + 3] == 'o') ? i + 1 : i + 2);
                i += 2;
            }
            else if (i + 2 < s.size() && s[i] == 'o' && s[i + 1] == 'n' && s[i + 2] == 'e')
            {
                res.pb((s[i + 3] == 'e') ? i + 1 : i + 2);
                i += 2;
            }
        }

        cout << res.size() << ENDL;

        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] + 1 << " ";
        }
    }
}
