#include <stdio.h>

int main() {
    printf("=====FLAG SWAPPER=====\n");
    printf("Please enter a string (length == 10):\n");
    char flag[10];
    scanf("%s", flag);
    printf("Copy that! I will swap it for you.\n");
    int order[] = {8,5,9,1,2,4,3,6,7,0};
    for (int i = 0; i < 10; i++)
    {
        char temp = flag[i];
        flag[i] = flag[order[i]];
        flag[order[i]] = temp;
    }
    printf("There you go:\n");
    printf("FLAG{");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", flag[i]);
    }
    printf("}\n");
    
    
    return 0;
}
