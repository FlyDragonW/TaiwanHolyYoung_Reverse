#include <stdio.h>
#include <unistd.h>
#include <string.h>

char flag[10] = {'_','c','c','R','e','v','g','d','c','}'};

void process_01();
void process_02();
void process_03();
void process_04();
void process_05();
void process_06();
void process_07();
void process_08();
void process_09();
void process_10();

void process_01(){
    flag[1] = 's';
    process_04();
    process_08();
}

void process_02(){
    flag[2] = '1';
    flag[3] = 'e';
}

void process_03(){
    flag[5] = 'p';
    process_10();
}

void process_04(){
    flag[5] = 'a';
    process_02();
    sleep(10000);
}

void process_05(){
    flag[4] = '3';
    process_09();
    process_10();
}

void process_06(){
    flag[6] = 'r';
    process_03();
    process_07();
}

void process_07(){
    flag[7] = '0';
    process_10();
}

void process_08(){
    flag[8] = 'g';
    sleep(1);
    process_05();
}

void process_09(){
    sleep(10000);
    flag[8] = 'c';
    process_06();
}

void process_10(){
    sleep(10000);
}

int check_access(char* str){
    char secret[14] = {'E','O','@','J','~','{','[','{','3','r','R','Q','q','Q'};
    for(int i=0;i<14;i++){
        if(( (char)((int)str[i]+1)^2) == secret[i]){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}

void verify(char str[14]){
    char password[] = "super_secret_pw";
    if(strcmp(str, password) == 0){
        process_01();
    }
    else{
        printf("Permission denied.");
    }
}

int main() {
    char name[14];
    printf("Please enter your name : ");
    scanf("%s", name);

    if(check_access(name) == 1){
        char password[15];
        printf("Permission accept.\nPlease enter your password : ");
        scanf("%s", password);

        verify(password);

        for (int i = 0; i < 10; i++)
        {
            printf("%c", flag[i]);
        }
        
    }
    else{
        printf("Permission denied.");
    }
    return 0;
}