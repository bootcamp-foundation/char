#include <stdio.h>
#include <string.h>

int is_palindrom(char word[], int length){
    int start = 0, end = length - 1;

    while(start < end){

        if(word[start] != word[end]){
            return 0;
        }

        start++;
        end--;
    }

    return 1;
}

int main(){

    char word[1000];

    scanf("%s", word);

    if(is_palindrom(word, strlen(word))){
        printf("Plaindrom\n");
    } else {
        printf("Palindrom emas\n");
    }
    
    return 0;
}
