 #include<stdio.h>
int main(){
	int value=3,pos=2;
	value=value&~(1<<pos);
	printf("%d",value);
}
