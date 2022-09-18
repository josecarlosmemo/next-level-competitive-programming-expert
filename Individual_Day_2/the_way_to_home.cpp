#include <vector>
#include <iostream>
#include <queue>

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
    lli n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    vector<ii> adjList(n);

    for (int i = 0; i < n; i++)
    {
        int temp = d;

        while (s[i + temp] != '1' && temp > 0)
        {
            temp--;
        }
        ii node = {i + temp, temp};
        adjList[i] = node;
    }

    int curr = 0;
    int end = n - 1;
    int count = 0;
    while (curr != end)
    {
        if (curr == adjList[curr].f)
        {
            cout << -1 << ENDL;
            return 0;
        }
        curr = adjList[curr].f;
        count++;
    }
    cout << count << ENDL;

    return 0;
}
