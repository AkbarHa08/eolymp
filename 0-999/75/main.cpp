// @author : habibullayev
#include <bits/stdc++.h>
#define intt long long int
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define pii pair<int, int>
#define pll pair<intt, intt>
using namespace std;

int i, j;
int main()
{

    int a,m,n,cnt=0;
    cin >> a >> m;
    while( m > 0 ){
        if(a*2==m){
            cnt++;
            cout << cnt << endl;
            return 0;
        } 
        m -= a;
        a++;
        cnt++;
    }

}