int main() {
int a,b
scanf("%d", a)
scanf("%d", b)
char c;
scanf("%d", c)
printf("%d", a+b)
if(a+b == 5):
    flag()
return 0
}

void flag(){
    char enc[] = {0x20, 0x20, 0x38, 0x23, 0x09, 0x36, 0x15, 0x06, 0x1a, 0x12, 0x09, 0x17, 0x3b, 0x1b, 0x0f, 0x38, 0x2c, 0x13, 0x66};
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