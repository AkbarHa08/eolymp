// @author : habibullayev
#include <stdio.h>
#include <math.h>
using namespace std;
typedef long long ll;
ll a, b, bil, n;
int main(){
	scanf("%lld",&n);
	bil=2ll*ceil((double)(n+sqrt(6.0*n))/2)-n;
	a=(3ll*n + bil)/2ll;
	printf("%lld\n", a);
	return 0;
}