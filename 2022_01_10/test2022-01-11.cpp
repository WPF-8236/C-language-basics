#include <stdio.h>
//作用域和生命周期
//局部变量的作用域:就是变量所在的局部范围
//全局变量的作用域:整个工程 

//声明变量
//extern int g_val; 
//int g_val = 2022; 
//int main(){
//	printf("扶欢清雅\n");
//	printf("g_val = %d\n",g_val);
//	{
//		int a = 10;
//		printf("a = %d\n",a);
//		printf("g_val = %d\n",g_val);
//	}
//	//printf("a = %d\n",a);
//	printf("g_val = %d\n",g_val);
//	return 0;
//} 

//生命周期
//变量的创建和销毁之间的时间段

//局部变量的生命周期:进入局部范围生命开始,出局部生命结束 
//全局变量的声明周期: 程序的生命周期 
//int main(){
//	{
//		int a = 10;
//		printf("%d\n",a); 
//	}
//	return 0 ; 
//}


//常量

//int main(){
//	//1.字面常量
//	/*
//		3.114;
//		10;
//		'a';
//		"abcd";
//	*/
//	
//	//2.const修饰的常变量
//
//	int num = 10;//变量
//	num = 20;
//	printf("%d\n",num);//20
//	const int num2 = 10;//常变量 - 具有常属性(不能被改变的属性) 
//	num2 = 20;//报错 
//	
//	int arr[10] = {0};//10个元素
//	int n = 10;
//	int arr2[n] = {0};//报错,n是变量的 
//	
//	const int n2 = 10;//n2是常变量 
//	int arr3[n2] = {0};//报错,n2还是变量的 
//	
//	//3.#define 定义的标识符常量
//	#define MAX 10
//	int n = MAX;
//	printf("%d\n",MAX);//10
//		 
//}

//4.枚举常量
//可以一一列举的常量
//性别 
//enum Sex{
//	MALE,
//	FEMALE,
//	SECRET,	//这种枚举变量的未来可取值 
//	a = 10 //赋初值 
//};
//
//int main(){
//	enum Sex s = MALE;
//	MALE = 3;//报错 
//	printf("%d\n",MALE);	//0
//	printf("%d\n",FEMALE);	//1
//	printf("%d\n",SECRET);	//2
//	return 0;
//}