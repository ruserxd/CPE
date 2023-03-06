#include<stdio.h>
typedef unsigned long long ll;
ll ten(ll t){
    while(t>9){
        t/=10;
    }
    return t;
}
ll happy(ll a,ll origin){
    ll sum =0;
    ll ct =10;
    while(a>0){
        ll k =(a%ct);
        k *=k;
        sum +=k;
        a/=10;
    }
    if(sum ==1){
        return 1;
    }
    else if(sum==origin||(sum%10==0 &&(sum/10)!=1&&(sum/10)<9)){
        return 0;
    }
    else{
        return happy(sum,origin);
    }
    return 10;
}
int main(){
    ll n;
    scanf("%lld",&n);
    for(ll i =1;i<=n;i++){
        ll input;
        scanf("%lld",&input); 
        ll cout =happy(input,input);
        if (cout==1)printf("Case #%lld: %lld is a Happy number.\n",i,input);
        else printf("Case #%lld: %lld is an Unhappy number.\n",i,input);
    }
}