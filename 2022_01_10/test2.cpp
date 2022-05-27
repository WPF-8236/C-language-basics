//数据类型
//计算机语言-写程序-解决生活问题
//必须有能力来描述生活中问题
/*
char  	//字符数据类型
short	//短整型
int		//整形
long	//长整型
long long	//更长整形
float	//单精度浮点数
double	//双精度浮点数
*/
//a-'a'-字符a

/*int main()	{
	
	//字符数据类型
	char ch = 'a';
	//整形 
	int age = 20;
	//短整型 
	short num = 10; 
	return 0; 
}
*/
/*
//类型大小
#include <stdio.h>
int main(){
	printf("Hello World\n");
	printf("扶欢清雅\n");
	printf("%d\n",100);//打印一个整型 -%d
	//sizeof-关键字-操作符-计算类型或者变量所占空间大小
	printf("%d\n",sizeof(char)); 		//1
	printf("%d\n",sizeof(short));		//2
	printf("%d\n",sizeof(int));			//4
	printf("%d\n",sizeof(long));		//4
	printf("%d\n",sizeof(long long));	//8
	printf("%d\n",sizeof(float));		//4
	printf("%d\n",sizeof(double));		//8
	return 0;
}*/
#include<stdio.h>
/*int main(){
	//创建一个变量
	//类型 变量名 = 值;		类型 变量名;
	int age = 20;
	double weight = 75.3;
	age = age + 1; 
	weight = weight - 10;
	printf("%d\n",age);
	printf("%lf\n",weight);
	return 0;
}*/
//%d - int
//%f - float
//%lf - double	 


/*//全局变量-{}外部定义的 
int a = 100;
int main(){
	//局部变量-{}内部定义的
	int a = 10;
	//当局部变量和全局变量名字冲突的情况下,局部优先 
	printf("%d\n",a);
	
	return 0; 
}*/

//写一个代码求两个正数的和
//scanf()输入函数 
/*int main(){
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d",&a,&b);
	sum = a + b;
	printf("sum = %d\n",sum);
	return 0;
}*/ 