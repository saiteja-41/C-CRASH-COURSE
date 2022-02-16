#include<stdio.h>
int mul(int a,int b){
	if(a==0)
		return 0;
	else
		return b=mul(a-1,b);
}
void main(){
	printf("%d",mul(5,6));
}


