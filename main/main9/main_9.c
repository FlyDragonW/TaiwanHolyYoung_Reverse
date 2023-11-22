#include <stdio.h>
#include <string.h>
int enc[] = {0x118, 0x134, 0x43, 0x44, 0x1fc, 0x110, 0x68, 0x40, 0x1e9, 0x15a, 0x6d, 0x3a, 0x16a, 0xfb, 0x7d, 0x51, 0x110, 0x1e4, 0x77, 0x4c, 0x1c0, 0x1c0, 0x60, 0x26, 0xa4, 0x118, 0x7b, 0x44, 0x1e8, 0xb4, 0x71, 0x6b, 0x1a0, 0x138, 0x4e, 0x67, 0x164, 0x94};

int verify(char* data){
    //char enc[] = "FLAG{AnGr_g1V3s_The_dev11_a_f0otHolD}";

    int i;
    for(i=0;i < 38;i++){
        //((enc[i]^i) << ((i^3) & 2)) | ((enc[i]^1) >> (i ^ 9) & 3);
        if(enc[i] != (((data[i]^i) << ((i^3) & 2)) | ((data[i]^1) >> (i ^ 9) & 3))) return 0;
    }   
    return i == 38;
}

int main(int argc, char* argv[]) {
    if(argc == 2){
        if(verify(argv[1])){
            printf("You find the flag!\n");
        }else{
            printf("This is not the flag.\n");
        }
    }
    else{
        printf("Please give me a string.\n");
    }
    return 0;
}