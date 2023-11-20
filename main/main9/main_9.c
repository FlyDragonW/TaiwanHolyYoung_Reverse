#include <stdio.h>
#include <string.h>

int verify(char* data){
    //char enc[] = "FLAG{AnGr_g1V3s_The_dev11_a_f0otHolD}";
    char enc[] = {0x46, 0x4c, 0x41, 0x47, 0x7b, 0x41, 0x6e, 0x47, 0x72, 0x5f, 0x67, 0x31, 0x56, 0x33, 0x73, 0x5f, 0x54, 0x68, 0x65, 0x5f, 0x64, 0x65, 0x76, 0x31, 0x31, 0x5f, 0x61, 0x5f, 0x66, 0x30, 0x6f, 0x74, 0x48, 0x6f, 0x6c, 0x44, 0x7d, 0x00};

    int i;
    for(i=0;i < 38;i++){
        //((enc[i]^i) << ((i^3) & 2)) | ((enc[i]^1) >> (i ^ 9) & 3);
        ((data[i]^i) << ((i^3) & 2)) | ((data[i]^1) >> (i ^ 9) & 3);
        if(enc[i] != data[i]) return 0;
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