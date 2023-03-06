#include<stdio.h>
#include<string.h>
typedef long long ll;
int main (){
    ll n,ct=1;
    
    while(scanf("%lld",&n)&&n>=0){
        ll array[12]={0};
        ll array2[12]={0};
        for(ll i =0;i<12;i++)scanf("%lld",&array[i]);
        for(ll k =0;k<12;k++)scanf("%lld",&array2[k]);
        ll count =n;
        printf("Case %lld:\n",ct);
        for(ll h =0;h<12;h++){
            if(count>=array2[h]){
                printf("No problem! :D\n");
                count -=array2[h];
            }
            else {
                printf("No problem. :(\n");
            }
            count +=array[h];
        }
        ct++;
    }
}