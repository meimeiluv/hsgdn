#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);

    long long n,x,k;cin >> n >> x >> k;
    long long du = x - (n * k);
    long long chiadeu = du / n;
    long long ithon = n - (du % chiadeu);

    cout << chiadeu << ' ' << ithon;

    return 0;
}
