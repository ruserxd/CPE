#include<stdio.h>

int main(void){
    int n;
    // 0不是一個質數 1不是emirp但是質數 2是一個emirp
    while(scanf("%d",&n)==1){
        int judge = 1;
        int i=0;
        for(i = n-1;i>1;i--){
            if((n%i)==0){
                judge = 0;
                break;
            }
        }
        int count =1,inverse=0;//n要再寫一個變數
        int copy =n,copy2=n;
        if(judge !=0){
            while(n>0){
                n/=10;
                count*=10;
            }   
            count /=10;

            while(count>0){
                inverse = inverse +(count)*(copy%10);
                count/=10;
                copy/=10;
            } 
        }
        if(judge ==0)printf("%d is not prime.\n",copy2);
        else {
            judge =2;
            for(int g = inverse-1;g>1;g--){
                if((inverse%g)==0){
                    judge = 3;
                    break;
                }
            }
            if(inverse==copy2)judge=3;
            if(judge ==2)printf("%d is emirp.\n",copy2);
            else if (judge ==3)printf("%d is prime.\n",copy2);
        }
    }
}