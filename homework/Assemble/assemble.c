#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if(argc != 2) return 0;
    int data = atoi(argv[1]);
    for (int i = 0; i < 2; i++)
    {
        data *= 3;
    }
    

    printf("0x%x\n", data);
    
    return 0;
}
