#include <stdio.h>
#include <string.h>
#include <ctype.h>
char keybord[] = "1234567890-=  qwertyuiop[]\\  asdfghjkl;'  zxcvbnm,./'";
int main()
{
    char c;
    while(scanf("%c", &c) != EOF){
        if (c == 32 || c == 10){//32空格10換行
            printf("%c", c);
        }
        else{
            c= tolower(c);
            //將大寫字轉成小寫
            for(int i = 0; keybord[i]!='\0'; i++){
                if (c == keybord[i]){
                    printf("%c",keybord[i-2]);
                    break;
                }
            }
        }
    }
    return 0;
}