#include<stdio.h>
void bangle(long long num){
    if(num>=10000000){
        bangle(num/10000000);
        printf(" kuti");
        num%=10000000;
    }
    if(num>=100000){
        printf(" %lld",num/100000);
        printf(" lakh");
        num%=100000;
    }
    if(num>=1000){
        printf(" %lld",num/1000);
        printf(" hajar");
        num%=1000;
    }
    if(num>=100){
        printf(" %lld",num/100);
        printf(" shata");
        num%=100;
    }
    if(num!=0)
    printf(" %lld",num);
}
int main(void){
    long long num ;
    long long Case=0;
    while (scanf("%lld",&num)==1){
        printf("%4lld.",++Case);
        if(num)bangle(num);
        else printf(" 0");
        printf("\n");
    }
    return 0;
}