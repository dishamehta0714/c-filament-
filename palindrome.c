#include<stdio.h>
#include<string.h>

int main(){

    char str[50];
    int length = 0;
    int len;

    printf("Enter any string: ");
    scanf("%s", str);

    len = strlen(str);

    for(int i = 0; i < len / 2; i++){
        if(str[i] != str[len - i - 1]){
            length = 1;
            break;
        }
    }

    if(length == 0){
        printf("the string is a palindrome.\n");
    }else{
        printf("the string is not a palindrome.\n");
    }

    return 0;
}