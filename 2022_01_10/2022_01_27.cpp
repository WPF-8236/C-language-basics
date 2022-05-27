#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////编写函数不允许创建零时变量,求字符串的长度
///*
//int my_strlen(char *str){
//	int count = 0;
//	while(*str !='\0'){
//		count++;
//		str++;
//	}
//	return count;
//}*/
//int my_strlen(char *str){
//	if(*str != '\0')
//		return 1+ my_strlen(str+1);
//	else
//		return 0;
//}
//int main(){
//	char arr[]="abc";
//	//['a']['b']['c']['\0']
//	//模拟实现strlen函数 
//	printf("%d\n",my_strlen(arr));
//} 

//计算斐波那契数列第N个的数 

//int Fib(int n){
//	if(n <= 2)
//		return 1;
//	else
//		return Fib(n-1) + Fib(n-2);
//}
//int Fib(int n){
////int arr[100]={0,1,1,0};
////	for(int i=3;i<=n;i++)
////		arr[i]=arr[i-1]+arr[i-2];
////	return arr[n];
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2){
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main(){
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d\n",Fib(n));
//}