#include<stdio.h>
#include<string.h>

int main (){
    int n;
    char array[128];
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%s",array);
        int judge =1;
        int len = strlen(array);
        int small =0,big =0;
        for(int u =0 ;u<len ;u++){
            if(array[u]=='(')small++;
            else if(array[u]==')')small--;
            else if(array[u]=='[')big++;
            else if(array[u]==']')big--;
        }
        if(small==0&&big==0)printf("Yes\n");
        else printf("No\n");

    }
    return 0;
}