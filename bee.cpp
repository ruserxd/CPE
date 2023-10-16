#include <iostream>
#include <vector>
typedef long long int ll;
using namespace std;
vector<pair<ll,ll> >dp;
pair<ll,ll> recr(ll n) {
    if(n == 0) {
        return make_pair(1 + dp[n].second  ,dp[n].second+dp[n].first);
    }
    dp[n] = recr(n-1);
    return make_pair(1 + dp[n].second  ,dp[n].second+dp[n].first);
}
int main() {
    ll n;
    while (cin >> n) {
        if(n == - 1) break;
        int male = 1,female = 1;
        if(n == 0) {
            cout << 0 << " " << 1 <<endl;
        } else {
            dp.resize(n);
            dp[0] = make_pair(1,1);      //f , m
            recr(n-1);
            cout << dp[n-1].second << " " <<dp[n-1].first +dp[n-1].second << endl;        
        }
    }
    return 0;
}