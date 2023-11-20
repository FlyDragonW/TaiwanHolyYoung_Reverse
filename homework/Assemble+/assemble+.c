#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if(argc != 2) return 0;
    int i;
    for(i = 0; i < strlen(argv[1]); i++) {
        if(argv[1][i] >= 'A' && argv[1][i] <= 'Z') {
            argv[1][i] = (argv[1][i] - 'A' + 7) % 26 + 'A';
        } else if(argv[1][i] >= 'a' && argv[1][i] <= 'z') {
            argv[1][i] = (argv[1][i] - 'a' + 7) % 26 + 'a';
        }
    }
    

    printf("%s", argv[1]);
    
    return 0;
}
