#include <stdio.h>
union s{
    int a;
    char s1[4];
}uc;

//a的值的二进制 00010010 00110100 01010110 01111000
void main(){
    int i=0;
    uc.a=0x12345678;
    printf("0x%x\n",&uc);
    for(int i=0;i<4;i++){
        printf("0x%x 0x%x\n ",&uc.s1[i],uc.s1[i]);
    }
    system("pause");
}