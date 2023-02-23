#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)==1){
        printf("TERM %d IS ",n);
        int ct=1;
        while(n>0){//這邊找他位於第幾位
            n-=ct;
            ct++;
        }
        ct--;      //會超出一格
        int count = n+ct-1;//計算要走幾次
        if(ct%2==0){
            printf("%d/%d",1+count,ct-count);//右上到左下
        }
        else{
            printf("%d/%d",ct-count,1+count);//左下到右上
        }
        printf("\n");
    }
}