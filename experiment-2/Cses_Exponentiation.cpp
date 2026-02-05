#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
long long modexp(long long a, long long b) {
    a %= MOD;
    long long res = 1;
    while (b>0){
        if (b&1)res=(res*a)%MOD;
        a=(a*a)% MOD;
        b>>=1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        long long a, b;
        cin >> a >> b;
        cout << modexp(a, b) << '\n';
    }
    return 0;
}
