#include<stdio.h>
int main(){
         int a=5;
         int *p=&a;
         int **q=&p;
        printf("%d,%d",*p,**q);
}

