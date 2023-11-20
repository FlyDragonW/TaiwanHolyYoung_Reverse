#include <stdio.h>
#include <string.h>

void flag(){
    char enc[] = {0x20, 0x20, 0x38, 0x23, 0x09, 0x28, 0x13, 0x48, 0x1d, 0x39, 0x02, 0x16, 0x30, 0x2d, 0x11, 0x08, 0x1c, 0x1d, 0x57, 0x0e, 0x15, 0x57, 0x53, 0x40, 0x46, 0x12};
    int enclen = sizeof(enc);
    char key[] = "flydragon";
    int keylen = strlen(key);

    for(int i=0;i < enclen;i++){
        key[i] = key[i % keylen];
        enc[i] = enc[i] ^ key[i];
        printf("%c", enc[i]);
    }
    printf("\n");
}

int main() {
    printf("Are you admin?\n");
    char input[100];
    scanf("%s", input);
    if(1==1){
        printf("Awww.. I know you are NOT admin.\n");
        return 0;
    }
    else{
        flag();
        return 0;
    }
}