#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi  vector<int>
#define vll vector<long long int>
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define pl(x) printf("%lld\n", x)
#define pi(x) printf("%d\n", x)
#define ps(s) printf("%s\n", s)
#define fo(i, n) for (auto i = 0; i < n; i++)
#define fo1(i, n, x) for (ll i = 0; i < n; i=i+x)
#define ALLOC(x, n)  (x*)malloc(n * sizeof(x));

void solve() {
   ll n,sum=0; sl(n);
   ll b[n-1];
   fo(i,n-1) sl(b[i]);
   ll max=b[0];
   fo(i,n-1) {
      sum+=b[i];
      if(b[i]>max) max=b[i];
   }
   sum+=max;
   pl(sum);
}

int main() {
    int testCase = 1;
    cin >> testCase;
    while(testCase--) solve();
    return 0;
}
