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
    vector<lli> a(n);
    fore(i, 0, n)
    {
        cin >> a[i];
    }
    lli count = 0;
    lli sum = 0;
    vi res;
    for (int j = 0; j <= n - 1; j++)
    {
        sum += a[j];
    }
    res.pb(sum);
    if (sum == 0)
    {
        count++;
    }

    for (int j = 0; j <= n - 2; j++)
    {
        sum -= a[j];
        res.pb(sum);
        if (sum == 0)
        {
            count++;
        }
    }
    sort(res.begin(), res.end());
    int cantidad = 0;
    sum = 0;
    for (int i = 0; i < res.size() - 1; i++)
    {
        if (res[i] == res[i + 1])
        {
            cantidad++;
        }
        else
        {
            for (int i = cantidad; i > 0; i--)
            {
                sum += i;
            }
            count += sum;
            cantidad = 0;
            sum = 0;
        }
    }
    for (int i = cantidad; i > 0; i--)
    {
        sum += i;
    }
    count += sum;

    cout << count << endl;

    return 0;
}
