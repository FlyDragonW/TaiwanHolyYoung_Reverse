#include <stdio.h>
#include <string.h>

int balance = 100;
void flag(){
    char enc[] = {0x20, 0x20, 0x38, 0x23, 0x09, 0x18, 0x57, 0x1a, 0x3c, 0x15, 0x03, 0x2b, 0x55, 0x11, 0x09, 0x46, 0x12, 0x6e};
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

int shop(){
    printf("=====Welcome to flydragon shop=====\n");
    printf("How can I help you?\n");
    printf("(1) Check balance\n");
    printf("(2) Buy something\n");
    int mode = 0;
    scanf("%d", &mode);
    if(mode == 1){
        printf("Your balance is: %d \n", balance);
    }
    else if (mode == 2){
        printf("What do you want to buy?\n");
        printf("(1) Ball - $30\n");
        printf("(2) Plum - $10\n");
        printf("(3) Flag - $50000\n");
        unsigned int item = 0;
        scanf("%d", &item);
        item %= 4;
        int price[] = {0,30,10,50000};

        if(balance >= price[item]){
            printf("How much do you want?\n");
            int amount = 0;
            scanf("%d", &amount);
            if(balance >= amount*price[item]){
                balance -= amount*price[item];
                if(item == 3) flag();
                printf("There you go.\n");
            }
            else printf("Insufficient balance.\n");
        }
        else printf("Insufficient balance.\n");
    }
    else return 0;
    return 1;
}

int main() {
    while (shop()){

    }
    return 0;
}
