#include<stdio.h>
int main(){
	int value=7,pos=2;
	value=value|(1<<pos);
        printf("%d",value);
}


toggle bit
value=value^(1<<pos);
