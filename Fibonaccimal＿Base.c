#include<stdio.h>
#include<string.h>
int array[40]={0};


void new_fbna(){
    array[0]=1;
    array[1]=2;
    for(int i =2;i<=38;i++){
        array[i]=array[i-1]+array[i-2];
    }
}
int main(){
    int n;
    new_fbna();
    scanf("%d",&n);
    while(n--){
        int need;
        scanf("%d",&need);
        printf("%d = ",need);
        if(need==0){
            printf("(fib)");
        }
        else{
            int dip1=0;
            for(int i =38;i>=0;i--){
                if(array[i]<=need){
                    dip1=1;
                    putchar('1');
                    need-=array[i];
                }
                else{
                    if(dip1)putchar('0');
                }
            }
            printf(" (fib)\n");
        }
    }
    return 0;
}