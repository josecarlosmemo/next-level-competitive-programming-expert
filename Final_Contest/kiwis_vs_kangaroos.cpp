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
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    set<char> kangaroos = {'K', 'A', 'N', 'G', 'A', 'R', 'O', 'O'};
    set<char> kiwis = {'K', 'I', 'W', 'I', 'B', 'I', 'R', 'D'};
    lli kiwi_count = 0;
    lli kangaroo_count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (kiwis.count(s[i]) > 0)
        {

            if (s[i] == 'I')
            {
                kiwi_count += 3;
            }
            else
            {
                kiwi_count++;
            }
        }
        if (kangaroos.count(s[i]) > 0)
        {
            if (s[i] == 'A')
            {
                kangaroo_count += 2;
            }
            else if (s[i] == 'O')
            {
                kangaroo_count += 2;
            }
            else
            {
                kangaroo_count++;
            }
        }
    }
    if (kiwi_count > kangaroo_count)
    {
        cout << "Kiwis" << endl;
    }
    else if (kangaroo_count > kiwi_count)
    {
        cout << "Kangaroos" << endl;
    }
    else
    {
        cout << "Feud continues" << endl;
    }

    return 0;
}
