#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


/*
int main(){
	int age = 20;
	if(age >= 18)
		printf("成年\n");
		
	if(age >= 18)
		printf("成年\n");
	else
		printf("未成年\n"); 
		
	
	if(age < 18)
		printf("少年\n");
	else if(age >= 18 && age < 26) 
		printf("青年\n");
	else if(age >= 26 && age < 40) 
		printf("中年\n");
	else if(age >= 40 && age < 60) 
		printf("壮年\n");
	else if(age >= 60 && age < 100) 
		printf("老年\n");
	else
		printf("机械飞升\n"); 
}*/

/*
int main(){
	int a = 0;
	int b = 2;
	if(a == 1)
		if(b == 2)
			printf("hehe\n");
	else
		printf("haha\n");
} */

/*
int main(){
	int day = 0;
	scanf("%d",&day);
	switch(day){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 6:
		case 7:
			printf("休息日\n");
			break;
		default:
			printf("输入错误\n");
			break; 
			
	}
} */

/*
int main(){
	int n = 1;
	int m = 2;
	switch(n){
		case 1:m++;
		case 2:n++;
		case 3:
			switch(n){//switch可以嵌套 
				case 1:n++;
				case 2:m++;n++;break;
			}
		case 4:m++;break;
		default:break;
	}
	printf("m = %d, n = %d\n",m,n);//5,3
}*/

/*
int main(){
	int i = 1;
	while(i <= 10){
		if(i == 5)
			//break;//在while循环中,break用于永久的终止循环 
			continue;//continue的作用是跳过本次循环 
		printf("%d ",i);
		i++;
	}
}*/

/*
int main(){
	int ch = 0;
	while((ch = getchar())!=EOF)//EOF - end of file - 文件结束标志 
	//getc,getwc,getchar,getwchar
	//read a charater from a stream(getc,getwc),or get a character from stdin(getchar,getwchar) 
		putchar(ch);
	//ctrl+z - getchar 结束读取 
} */


/*
int main(){
	int ch = 0; 
	while((ch = getchar())!=EOF){
		if(ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}
} 
*/
/*
int main(){
	char password[20]={0};
	printf("请输入密码:>");//123456 abc 
	scanf("%s",password); //123456 
	printf("请确认密码(Y/N):>");
	//清理缓冲区
	//getchar();//处理\n //接受空格 
	int temp = 0;
	while((temp=getchar())!='\n');//接收缓冲区其他字符 
	int ch = getchar();//abc\n 
	if(ch == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n"); 
}*/

