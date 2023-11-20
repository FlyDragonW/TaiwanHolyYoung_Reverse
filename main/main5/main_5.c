#include <stdio.h>
#include <string.h>

int verify(char* data){
    char secret[] = {'F', 'L', 'A', 'G', '{', 'v', '3', 'r', 'y', '_', '5', 'e', 'C', 'u', 'r', 'e', '_', 'c', 'H', 'e', 'c', 'k', 'e', 'R', '}'};
    int len = sizeof(secret);
    for(int i=0;i < len;i++){
        if(data[i] != secret[i]){
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("I am a flag checker.\nPlease enter a string:");
    char input[100];
    scanf("%s", input);
    if(verify(input)){
        printf("You find the flag!\n");
    }else{
        printf("This is not the flag.\n");
    }
    return 0;
}