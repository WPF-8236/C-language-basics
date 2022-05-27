#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void Swap1(int x,int y){
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int *px,int *py){
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main(){
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1,num2);//传值调用 
//	printf("Swap1::num1 = %d num2 = %d\n",num1,num2);
//	Swap2(&num1,&num2);//传址调用 
//	printf("Swap2::num1 = %d num2 = %d\n",num1,num2);
//}

//void new_line(){
//	printf("hehe\n");
//} 
//
//void three_line(){
//	int i = 0;
//	for(i = 0;i < 3;i++)
//		new_line();
//}
//
//int main(){
//	three_line();
//}
//int main(){
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr,"bit"));
//	printf("%d\n",ret);
//	printf("%d",printf("%d",printf("%d",43)));4321
//}
//int Add(int,int);
//int main(){
//	int a = 10;
//	int b = 20;
//	//函数声明一下 - 告知
//	int Add(int ,int);
//	int Add(int x,int y);
//	int c = Add(a,b);
//	printf("%d\n",c); 
//}
//
//int Add(int x,int y){
//	return x+y;
//}

//int main(){
//	printf("hehe\n");
//	main();
//}

//接收一个无符号整形值,按照顺序打印他的每一位 
//void print(unsigned int n){
//	if(n > 9){
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
//int main(){
//	unsigned int num = 0;
//	scanf("%u",&num);
//	//递归 - 函数自己调自己
//	print(num);//print函数可以打印参数部分数字的每一位 
//}