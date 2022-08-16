#include<stdio>
int f(int n);
int main(){
	int n;
	printf("please input a number which you want to know the ficco number\n");
	scanf("%d",&n);
	printf("the number is %d",f(n);
	return 0;
}
int f(n){
	if(n<=2)
		return 1;
	else return f(n-1)+f(n-2);
}
