// @author : habibullayev
#include <bits/stdc++.h>
#define intt long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define pii pair<int, int>
#define pll pair<intt, intt>
using namespace std;

int mat[105][105];
vector<int> adj_list[10005];

int i, j;
int main()
{
    int n;
    cin >> n;
    int m;
    int cnt = 0;
    while( n > 0 ){
        m = n;
        int sum = 0;
        while(m >= 1){
            sum+=m%10;
             m=m/10;
        }
       
        n=n-sum;
        cnt++;
    } 
    cout << cnt << endl;
}