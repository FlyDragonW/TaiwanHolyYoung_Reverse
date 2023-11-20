#include <stdio.h>
#include <string.h>


int check(char* str){
    int flag[] = {68, 78, 67, 69, 121, 90, 77, 50, 38, 50, 35, 109, 77, 93, 77, 33, 77, 80, 127};
    int len = 18;
    for (int i = 0; i < len; i++)
    {
        if((int)(str[i] ^ 2) != flag[i]){
            return 0;
        }
    }
    return 1;
}

int main() {
    //char flag[] = "FLAG{XO0$0!oO_O#OR}";
    printf("Show me what you got!\n");
    char input[100];
    scanf("%s", input);
    if(check(input)) printf("You are a flag holder...!?\n");
    else printf("Haha that is a cool string.\n");
    return 0;
}
