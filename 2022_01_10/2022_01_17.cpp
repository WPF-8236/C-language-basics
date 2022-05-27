#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//字符串就是一串字符----用双引号括起来的一串字符串 
/*
int main(){
	"abdc";
	char arr[] = "Hello FH-QY";//字符数组 - 数组是一组相同类型的元素
	 //字符串在结尾的位置隐藏了一个\0的字符,\0为字符串的结束标志 
 	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};//不同编译器编译不同,根据编译器为准 ,这个数组整体在内存存储的字符数量未知 
 	printf("%s\n",arr1);
 	printf("%s\n",arr2);//可能会打出另外乱码 ,因为不知道哪里有\0 
 	
 	//验证字符串长度 - - string length - - strlen() - - string.h
	 printf("%d\n",strlen("abc"));//3 ,不包含\0 
	 printf("%d\n",strlen(arr1));//3 ,不包含\0 
	 printf("%d\n",sizeof(arr1));//4 ,包含\0 
	 printf("%d\n",strlen(arr2));//随机值 因为不知道哪里有\0 
	 return 0;	 
}*/

/*
int main(){
	printf("c:\test\test.c\n");//c:      est     est.c
	//转义字符 
	printf("c:\test\test.c??)\n");// ??) 转译为 ] - 三字母词,此代码正常打印??)非]
	\? - 多个连续问号出现防止解析为三字母词
	\' - 用于表示字符常量'
	\" - 用于表示字符常量"
	\\ - 用于表示字符常量\,并防止被认为转义序列符
	\a - 警告字符,凤鸣
	\b - 退格符
	\f - 进纸符 
	\n - 换行符 
	\r - 回车符 
	\t - 水平制表符 
	\v - 垂直制表符
	\ddd - ddd表示1~3个八进制数,\130 - X
	\xdd - dd表示2个十六进制数,\x30 - 0 
	printf("%d\n",strlen("c:\test\328\test.c"));//14
}
*/

/*
int main(){
	int input = 0;//输入的值 
	printf("加入扶欢清雅:>");
	printf("那要好好学习吗(1/0)?>:");
	scanf("%d",&input);
	if(input == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n"); 
}*/

/*
int main(){
	int line = 0;
	//循环 
	while(line<30000){
		printf("写代码\n");
		line++;
	}
	if(line == 30000)
		printf("好offer\n");
} */


/*
int Add(int x,int y){
	return x+y;
}
int main(){
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d",&num1,&num2);
	//计算方式 
	int sum = num1 + num2;
	//函数方式
	sum = Add(num1,num2); 
	printf("%d\n",sum);
} */

/*
int main(){
	//数组 - 一组相同类型的元素的集合
	//10个整形1-10保存
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	char ch[5] = {'a','b','c'};//不完全初始化,剩余的默认为0
	//访问arr,通过数组下标,数组下标从0开始计数 
	int i = 0;
	while(i<10){
		printf("%d\n",arr[i]);
		i++;
	} 
}*/

/*
int main(){
	int a = 9 / 2;
	float b = 9 / 2;
	float c = 9 / 2.0;
	int d = 9 % 2;//取模 
	printf("%d\n",a);//4
	printf("%f\n",b);//4.000000
	printf("%f\n",c);//4.500000
	printf("%d\n",d);//1
	
	int e = 2;
	int f = e<<1;//移动的是二进制位 
	printf("%d\n",f);//4
 
 	printf("%d\n",-0);
} */

//C语言提供的关键字
//1.C语言提供的,不能自己创建关键字
//2.关键字不能作为变量名 
/*
int main(){
	{
		auto int a = 10;//自动创建,自动销毁的自动变量,auto修饰局部变量 
		//auto省略 
	}
} */

/*
//define是一个预处理指令
//define定义符号
#define MAX 1000
//define定义宏
#define ADD1(X,Y) X+Y 
#define ADD2(X,Y) ((X)+(Y))
int main(){
	printf("%d\n",MAX);
	printf("%d\n",ADD1(2,3));//5
	printf("%d\n",4*ADD1(2,3));//11	4*ADD1(2,3)=4*2+3
	printf("%d\n",4*ADD2(2,3));//20	4*ADD2(2,3)=4*((2)+(3))
} */

/*
int main(){
	int a = 10;//a在内存中要分配4个字节空间
	printf("%p\n",&a); //0060FF24
	int* pa = &a;//pa用来存放地址的,成为指针变量,*说明pa使指针变量,int说明pa执行的对象是int类型
	
	char ch = 'w';
	char* pch = &ch; 
	
	*pa = 20;//*解引用操作,*pa就是通过pa里的地址,找到a
	printf("%d\n",a); 
	
	//指针大小,指针大小取决于地址的存储大小 
	printf("%d\n",sizeof(char*)); //4
	printf("%d\n",sizeof(int*)); //4
	printf("%d\n",sizeof(short*)); //4
	printf("%d\n",sizeof(long*)); //4
	printf("%d\n",sizeof(long long*));//4 
	printf("%d\n",sizeof(float*)); //4
	printf("%d\n",sizeof(double*)); //4
}*/
/*
//结构体可以让C语言创建新的类型
//创建一个学生
struct Stu{
	char name[20];
	int age;
	double score;
};
//创建一个书的类型
struct Book{
	char name[20];
	float price;
	char id[30];
};

int main(){
	struct Stu s = {"张三",20,89.8};//结构体的创建和初始化
	printf("%s %d %lf\n",s.name,s.age,s.score);//.操作 张三 20 89.800000
	struct Stu * ps = &s;
	printf("%s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);//.操作 张三 20 89.800000
	printf("%s %d %lf\n",ps->name,ps->age,ps->score);//->操作 张三 20 89.800000
}*/