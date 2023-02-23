#include<stdio.h>
#include<string.h>

int main(){
    char array[100];
    while(gets(array)!=EOF){
    int n  = strlen(array);
    for(int i = 0;i<n;i++){
        if(array[i]=='e'){
            array[i]='q';
        }
        else if(array[i]=='r'){
            array[i]='w';
        }
        else if(array[i]=='t'){
            array[i]='e';
        }
        else if(array[i]=='y'){
            array[i]='r';
        }
        else if(array[i]=='u'){
            array[i]='t';
        }
        else if(array[i]=='i'){
            array[i]='y';
        }
        else if(array[i]=='o'){
            array[i]='u';
        }
        else if(array[i]=='p'){
            array[i]='i';
        }
        else if(array[i]=='['){
            array[i]='o';
        }
        else if(array[i]==']'){
            array[i]='p';
        }
        else if(array[i]=='\\'){
            array[i]='[';
        }
        else if(array[i]=='d'){
            array[i]='a';
        }
        else if(array[i]=='f'){
            array[i]='s';
        }
        else if(array[i]=='g'){
            array[i]='d';
        }
        else if(array[i]=='h'){
            array[i]='f';
        }
        else if(array[i]=='j'){
            array[i]='g';
        }
        else if(array[i]=='k'){
            array[i]='h';
        }
        else if(array[i]=='l'){
            array[i]='j';
        }
        else if(array[i]==';'){
            array[i]='k';
        }
        else if(array[i]=='\''){
            array[i]='l';
        }
        else if(array[i]=='c'){
            array[i]='z';
        }
        else if(array[i]=='v'){
            array[i]='x';
        }
        else if(array[i]=='b'){
            array[i]='c';
        }
        else if(array[i]=='n'){
            array[i]='v';
        }
        else if(array[i]=='m'){
            array[i]='b';
        }
        else if(array[i]==','){
            array[i]='n';
        }
        else if(array[i]=='.'){
            array[i]='m';
        }
        else if(array[i]=='/'){
            array[i]=',';
        }
    }
    printf("%s",array);
    }
}