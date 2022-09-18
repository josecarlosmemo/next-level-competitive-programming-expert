#include <vector>
#include <iostream>
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
    _;

    lli n;
    cin >> n;

    vi a(n);

    fore(i, 0, n) cin >> a[i];

    lli kn;
    cin >> kn;

    lli pow = log2(n) + 1;

    for (int i = 0; i < kn; i++)
    {
        lli ki;
        cin >> ki;

        lli pos = -1;

        for (int j = pow; j >= 0; j--)
        {
            lli paso = (1 << j);
            if (pos + paso < n && a[pos + paso] < ki)
            {
                pos += paso;
            }
        }

        cout << ki << " " << pos << ENDL;

        if (a[pos] == ki)
            cout << 1 << ENDL;
        else
            cout << 0 << ENDL;
    }

    return 0;
}

// _;

// lli n;
// vi a(n);

// fore(i, 0, n) cin >> a[i];

// lli k;
// cin >> k;

// for (int i = 0; i < k; i++)
// {
//     lli ki;
//     cin >> ki;
//     lli pow = log2(n) + 1;
//     lli pos = -1;

//     for (int j = pow; j >= 0; j--)
//     {
//         lli paso = 1 << j;
//         if (pos + paso < n && a[pos + paso] < ki)
//         {
//             pos += paso;
//         }
//     }

//     if (a[pos] == ki)
//         cout << 1 << ENDL;
//     else
//         cout << 0 << ENDL;
// }