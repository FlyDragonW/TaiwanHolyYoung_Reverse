#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void flag(){
    char enc[] = {0x20, 0x20, 0x38, 0x23, 0x09, 0x2d, 0x12, 0x2c, 0x05, 0x1f, 0x33, 0x1e, 0x11, 0x41, 0x12, 0x52, 0x5c, 0x1c, 0x1b, 0x6c};
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

int game(int ans){
    int guess = 0;
    scanf("%d", &guess);
    return guess == ans;
}

int main() {
    int num = rand() % 10000;
    printf("Guess a number:\n");
    int result = game(num);
    if(result){
        flag();
    }
    else{
        printf("Bad Luck.\n");
    }
    return 0;
}
