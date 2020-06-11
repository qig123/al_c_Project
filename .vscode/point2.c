void main(){
    int a=15,b=38,c=35,x=0;
    int* p=&a;
    //输出a b c  x的地址
    printf("0x%p 0x%p  0x%p   0x%p\n",&a,&b,&c,&x);
    //分析：p是指针类型的变量，它的值是a的地址&a
    //&p是p变量的地址, *&p是p的值&a,第3个输出的是p的值&a
    //第4个*p是寻找p保存的值（地址）指向的值15
    printf("0x%p 0x%p  0x%p   %d\n",&p,*&p,p,*p);
    //规律：先声明的变量地址比较大的，后声明的地址比较小
    //分析：i=0,*p是a的值15,p是a的地址,&p的变量p的地址
    //i=1,p--表示向后倒退一个单元，根据规律，此时*p的值是b=38,
    //p是b的地址，&p是变量p的地址，保持不变
    //到i=3,此时是x了,结束整个循环后。p的指针的值为x的地址
    printf("%s ","\n p--   -----\n");
     for(int i=0;i<3;i++,p--){
         printf("%d add= 0x%p\n",*p,p);
     }
     printf("0x%p\n ",p);
    printf("%s ","\n-p++  ---\n");
     for(int i=3;i>=0;i--,p++){
         printf("%d\n",*p);
     }
    system("pause");
}