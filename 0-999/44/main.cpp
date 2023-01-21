// @author : habibullayev
#include <bits/stdc++.h>
using namespace std;
#define intt long long
#define pii pair<int,int>
#define pll pair<intt,intt>
#define pb push_back
#define F first
#define S second
const int sz = 5005;
const int inf = INT_MAX;


int a[sz], b[sz];
int dp[sz];

int i,j;
int main()
{
    int n;
    cin >> n;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for( i = 3; i <= n; i++ ){
        int curAns = inf;
        for( j = 1; j <= (i/2 + 1); j++ ){
            curAns = min(curAns, dp[j] + dp[i - j]);
        }
        for( j = 2; j <= sqrt(i) + 1; j++ ){
            if( i % j == 0 ){
                curAns = min(curAns, dp[j] + dp[i / j]);
            }
        }
        dp[i] = curAns;
    }
    cout << dp[n] << endl;


}