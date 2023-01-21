// @author : habibullayev
#include <bits/stdc++.h>
#include <vector>
#define intt long long
#define pb push_back
#define endl '\n'
#define pii pair<int, int>
#define pll pair<intt, intt>
#define F first
#define S second
using namespace std;
const int sz = 1e6+5;
const int inf = 1e9+7;

int i,j;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    int siz = s.size();
    for( i = 0; i < siz/2; i++ ){
        if( s[i] == s[siz-1-i] ){
            cnt++;
        }
    }
    if( siz%2==1 ){
        cout << cnt+1 << endl;
    } else{
        cout << cnt << endl;
    }
   
}