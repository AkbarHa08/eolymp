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
const int sz = 1001;
const int inf = INT_MAX;
int a,b,c,d,m1[sz],m2[sz],n,ans=1,maxi;
char ch;

int i,j;
int main()
{
    int n;
    cin >> n;
    for( i = 1; i <= n; i++ ){
        cin >> a >> ch >> b >> c >> ch >> d;
        m1[i] = a*60 + b;
        m2[i] = c*60 + d;
    }
    for( i = 1; i <= n; i++ ){
        for( j = 1; j < n; j++ ){
            if( m2[j] > m2[j+1] ){
                swap(m2[j],m2[j+1]);
                swap(m1[j],m1[j+1]);
            } else if( m2[j] == m2[j+1] and m1[j] > m1[j+1] ){
                swap(m1[j],m1[j+1]);
            }
        }
    }
    maxi = m2[1];
    for( i = 2; i <= n; i++ ){
        if( m1[i] >= maxi ){
            ans++;
            maxi = m2[i];
        }
    }
    cout << ans << endl;

}