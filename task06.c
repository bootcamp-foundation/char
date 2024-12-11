#include <stdio.h>
#include <string.h>

void find_word(char arr[], char arr2[])
{ // Berilgan so’z char seriya ichida borligini tekshiruvchi funksiya
    int count = 0, j = 0;
    for (int i = 0; arr2[i+1] != '\0'; i++)
    {
        for (; arr[j] != '\0'; j++)
        {
            if (arr2[i] == arr[j] )
            {
                count++;
                j++;
                break;
            }else
            {
                count = 0;
                i = 0;
            }
        }    
    }
    if (count == strlen(arr2)-1)
    {
        printf("Bu so`z seriyada mavjud: %s", arr2);
        }else
    {
        printf("Bu shu seriyada mavju emas");
    }
}

int main()
{
    char arr[100], arr2[100];

    printf("matnni kiriting: \n");

    fgets(arr, sizeof(arr), stdin);

    printf("so`zni kiriting: \n");

    fgets(arr2, sizeof(arr2), stdin);

    find_word(arr, arr2);
}