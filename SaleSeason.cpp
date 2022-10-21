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
   ll n,val=0; sl(n);
   val=n;
   if(n<=100) val=n;
   else if(n>100 && n<=1000) val-=25;
   else if(n>1000 && n<=5000) val-=100;
   else val-=500;
   pl(val);
}

int main() {
    int testCase = 1;
    cin >> testCase;
    while(testCase--) solve();
    return 0;
}
