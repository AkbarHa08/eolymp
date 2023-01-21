// @author : habibullayev
#include <bits/stdc++.h>
using namespace std;
#define intt long long
#define uintt unsigned long long
#define ld long double
#define endl '\n'
#define pii pair<int, int>
#define pll pair<intt, intt>
#define pb push_back
#define F first
#define S second
const intt sz = 1e4+5;
const int inf = INT_MAX;
const int md = 998244353;
int a[sz];
bool used[sz];

int i, j;
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int l = 5000;
    string s;
    cin >> s;
    int res = 1;
    used[5000] = true;
    for( auto i : s ){
        if( i == 'L' ){
            l--;
        }
        if( i == 'R' ){
            l++;
        }
        if( !used[l] ){
            res++;
            used[l] = true;
        }
    }
    cout << res << endl;

}