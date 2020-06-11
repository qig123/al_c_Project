#include "constant.h"

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef int ElemType;

typedef struct{
    ElemType *elem;
    int length;
    int listsize;
}SqList;

Status InitList(SqList* list){
    list->elem=(ElemType)malloc(LIST_INIT_SIZE*sizeof(ElemType));
    if(!list->elem){
        exit(OVERFLOW);
    }
    list->length=0;
    list->listsize=LIST_INIT_SIZE;
    return OK;

}
//顺序表插入：在第i个元素之前插入一个元素时，需要将第n到第i个元素向后
//移动一个位置
Status ListInsert_Sq(SqList* list,int i,ElemType e){
    //在顺序线性表L中第i个位置之前插入新的元素e
    if(i<1 || i>list->length+1){
        return ERROR;
    }

    if(list->length>=list->listsize){
        int newsize=list->listsize+ LISTINCREMENT;
        int newlength=  sizeof(ElemType)*newsize;
        ElemType* newbase= (ElemType *)realloc(list->elem,newlength);
        if(!newbase){
            exit(OVERFLOW);
        }
        list->elem=newbase;
        list->listsize+=LISTINCREMENT;
    }
    //q为插入位置
    int* q=&(list->elem[i-1]);
    for(int * p=&(list->elem[list->length-1]);p>=q;--p){
        *(p+1)=*p;
    }
    *q=e; //插入e
    ++ list->length;
    return OK;
}