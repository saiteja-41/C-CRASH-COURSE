#include<stdio.h>
void reverse(char *s){
	if(*s){
		reverse(s+1);
		printf("%c",*s);
	}
}
void main(){
	char a[]="hello";
	reverse(a);
}
