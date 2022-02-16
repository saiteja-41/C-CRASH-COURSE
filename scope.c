 #include<stdio.h>
 extern int a=3;
 void fun(){
     auto int d=2;
     static int b=5;
     register int c=3;
     a++;
     b++;
     c++;
     d++;
     printf("%d %d %d %d\n ",a,b,c,d);
 }
 int main(){
     fun();
     fun();
     fun();
     
 }
