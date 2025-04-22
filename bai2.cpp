#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);

    int n,k;cin >> n >> k;
    int min_sbd;
    double max_sum = 0;    
    vector<pair<int,double>> arr;

    for(int i = 0;i < n;++i){
        double sum = 0;
        int sbd;cin >> sbd;
        for(int i = 0;i < k;++i){
            int a,b,c;cin >> a >> b >> c;
            sum += double(a+b+c) / 3;
        }

        if(sum > max_sum || (sum == max_sum && min_sbd > sbd)){
            max_sum = sum;
            min_sbd = sbd;
        }
    }

    cout << min_sbd << ' ' << fixed << setprecision(2) << max_sum; 

    return 0;
}
