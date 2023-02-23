#include<stdio.h>
void change(int*a,int*b){
    int var = *a;
    *a = *b;
    *b = var;
}
void cmd(int a,int b){
    int max =0 ;
    for(int i =1 ;i<=b;i++){
        if(a%i==0&&b%i==0){
            max =i;
        }
    }
    printf("%d",max);
}
void cdd(int a ,int b){
    for(int i = a ; i <=a*b;i++){
        if(i%a==0 && i%b==0){
            printf(" %d",i);
            break;
        }
    }
}
int main (){
    int a,b ;
    scanf("%d %d",&a ,&b);
    if(b>a){
        change(&a,&b);
    }
    //printf("%d %d",a,b);
    cmd(a,b);
    cdd (a,b);
}