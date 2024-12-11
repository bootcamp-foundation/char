#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char text[1000], word[1000];

    printf("Matnni kiriting: ");
    fgets(text, sizeof(text), stdin);
    printf("So'zni kiriting: ");
    scanf("%s", word);

    if(strstr(text, word) != NULL){
        printf("\"%s\" so'zi matn ichida bor\n", word);
    } else {
        printf("\"%s\" so'zi matn ichida yo'q\n", word);
    }

    return 0;
}
