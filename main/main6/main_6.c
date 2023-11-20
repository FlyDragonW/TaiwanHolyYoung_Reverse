#include <stdio.h>
#include <string.h>

void dec(char* data){
    int enclen = 23;
    char key[] = "flydragon";
    int keylen = strlen(key);

    for(int i=0;i < enclen;i++){
        data[i] = data[i] ^ key[i % keylen];
    }
}

int main() {
    char enc[] = {0x20, 0x20, 0x38, 0x23, 0x09, 0x05, 0x1e, 0x01, 0x5a, 0x0b, 0x5d, 0x1a, 0x3b, 0x13, 0x2f, 0x06, 0x03, 0x37, 0x1c, 0x09, 0x58, 0x19, 0x72, 0x00};
    dec(enc);
    printf("I just decrypted the flag, but you need to find it.\n");
    return 0;
}
