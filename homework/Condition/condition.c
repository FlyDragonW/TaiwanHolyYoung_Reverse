#include <stdio.h>
#include <string.h>

void flag(){
    char enc[] = {0x20, 0x20, 0x38, 0x23, 0x09, 0x28, 0x00, 0x5f, 0x1c, 0x55, 0x33, 0x3c, 0x12, 0x17, 0x13, 0x1e, 0x3b, 0x06, 0x57, 0x02, 0x1e, 0x19, 0x72};
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

int game(){
    printf("Welcome to the flag game! Try to win a flag.\nEnter your name: ");
    char input_1[100] = {};
    scanf("%s", input_1);
    printf("=====Round 1=====\n");
    for(int i=0;i<10;i++){
        int num = 0;
        printf("Number %d : ",i);
        scanf("%d", &num);
        if(num != ((i*i+7)&74)){
            printf("Bad Luck.\n");
            return 0;
        }
    }
    printf("=====Round 2=====\n");
    int ans[10] = {12, 87, 4, 32, 5, 6, 7, 70, 34, 99};
    for(int i=0;i<10;i++){
        int num = 0;
        printf("Number %d : ",i);
        scanf("%d", &num);
        if(num == ans[(i*3-i*i+100)%10]){
            continue;
        }else{
            printf("Bad Luck.\n");
            return 0;
        }
    }
    printf("=====Round 3=====\n");
    if(input_1[3] == 'R'){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    if(game()) flag();
    else printf("See ya lator~\n");
    return 0;
}
