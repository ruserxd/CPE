#include<stdio.h>
typedef long long ll;
typedef char c;
int main(){
    ll array[1000000]={0};
    ll a;
    scanf("%lld",&a);
    //printf("%lld",a);
    for(ll i =0;i<a;i++){
        ll n;
        ll ct=0;
        scanf("%lld",&n);
        //printf("%lld..\n",n);
        for(ll k =0;k<n;k++){
            //printf("%lld.\n",k);
            c front,behind;
            scanf("\n%c %c",&front,&behind);
            //printf("%c %c\n",front,behind);
            //printf("%d\n",(front-'0')+(behind-'0'));
            if((front-'0')+(behind-'0')>9){
                //array[ct-1]++;
                array[ct]=(front-'0')+(behind-'0')-10;
                int judge =1;
                ll copy =ct;
                while(judge==1){
                    if((array[copy-1]++)>9){
                        array[copy-1]=0;
                    }
                    else{
                        
                        array[copy-1]++;
                        printf("%lld\n",array[copy-1]);
                        judge =0;
                    }
                    copy--;
                }
            }
            else{
                array[ct]= front-'0'+behind-'0';
            }
            //printf("%lld\n",array[ct]);
            ct++;
        }
        for(ll k=0;k<n;k++)printf("%lld",array[k]);
        printf("\n");
    }
}