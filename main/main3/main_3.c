#include <stdio.h>
#include <string.h>

char secret[] = "TOP_SECRET";

void flag(){
    char enc[] = {0x20, 0x20, 0x38, 0x23, 0x09, 0x09, 0x57, 0x18, 0x31, 0x02, 0x5d, 0x1d, 0x3b, 0x0b, 0x51, 0x12, 0x30, 0x09, 0x55, 0x18, 0x26, 0x14, 0x46, 0x12, 0x14, 0x18, 0x0a, 0x1b};
    int enclen = strlen(enc);
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
    char password[100];

    printf("Please enter the password:");

    scanf("%s", password);
    
    if (strcmp(secret, password) == 0) {
        flag();
    } else {
        printf("Not this time!\n");
    }
    
    return 0;
}
