#include<stdio.h>
void main(){
    //int a=88,b=58,c=98,i=0;
    //int* p=&a;
    //printf("%d",sizeof(a));
    //p=p-1;
    //int addre=0x000000000061FE09;
    //printf("0x%p 0x%p  0x%p  0x%p 0x%d\n",&a,&b,&c,&i,p[-2]);
    int a=0x12345678,i=0;
    char* p;
    p=(char*)0x000000000061FE0C;
    //printf("0x%p\n",&a);
    printf("0x%p,0x%p\n",&a,p);
    for(i=0;i<4;i++,p++){
       printf("0x%p,%#x\n",p,*p);
    }
    system("pause");
}