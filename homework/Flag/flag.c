#include <stdio.h>
#include <string.h>

void flag(){
    char enc[] = {0x20, 0x20, 0x38, 0x23, 0x09, 0x26, 0x57, 0x20, 0x0a, 0x39, 0x26, 0x16, 0x55, 0x41, 0x40, 0x1a, 0x6f};
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

int main(){
    printf("Time to reverse the flag()\n");
    return 0;
}
