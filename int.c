void fun(int n){
	if(n){
		fun(n-1);
		printf("%d",n);
	}}
void main(){
	fun(5);
}
