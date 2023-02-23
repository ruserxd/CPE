#include<stdio.h>
int main (){
    int count = 1;
    char array[15]={0};
    while(scanf("\n%s",array)&&array[0]!='#'){
        printf("Case %d: ",count);
        count +=1;
        if(array[0]=='B')printf("FRENCH");
        else if(array[0]=='H'){
            if(array[1]=='E')printf("ENGLISH");
            else if (array[1]=='O')printf("SPANISH");
            else if (array[1]=='A')printf("GERMAN");
        }
        else if(array[0]=='C'){
            printf("ITALIAN");
        }
        else if(array[0]=='Z'){
            printf("RUSSIAN");
        }
        else{
            printf("UNKNOWN");
        }
        printf("\n");
    }
}