#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// int comp (const void*a,const void *b){
//     return(*(int*)a - *(int*)b);
// }
int comp (const void *a,const void *b){
    //將資料傳入需要先轉為  char 才可做計算
    char *pa = (char *)a;
    char *pb = (char *)b;
    //將pa ＆pb做相減
    return *pa - *pb;
}
int main(){
    char a [1001];
    char b [1001];
    while(gets(a)!= NULL && gets(b)!=NULL){
        qsort(a,strlen(a),sizeof(char),comp);
        qsort(b,strlen(b),sizeof(char),comp);
        //printf("%s %s\n",a,b);
        int i,j;
        for(i = 0 ,j=0;i<strlen(a)&&j<strlen(b);){
            if(a[i]==b[j]&& a[i]!=32&&b[j]!=32){
                printf("%c",a[i]);
                i++;
                j++;
            }
            else if(a[i]>b[j]){
                //printf("%c %c.1\n",a[i],b[j]);
                j++;
            }
            else{
                //printf("%c %c.2\n",a[i],b[j]);
                i++;
            }
        }
        printf("\n");
    }
    return 0;
}