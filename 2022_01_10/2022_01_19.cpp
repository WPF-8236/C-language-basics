#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


/*
int main(){
	int age = 20;
	if(age >= 18)
		printf("����\n");
		
	if(age >= 18)
		printf("����\n");
	else
		printf("δ����\n"); 
		
	
	if(age < 18)
		printf("����\n");
	else if(age >= 18 && age < 26) 
		printf("����\n");
	else if(age >= 26 && age < 40) 
		printf("����\n");
	else if(age >= 40 && age < 60) 
		printf("׳��\n");
	else if(age >= 60 && age < 100) 
		printf("����\n");
	else
		printf("��е����\n"); 
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
			printf("������\n");
			break;
		case 6:
		case 7:
			printf("��Ϣ��\n");
			break;
		default:
			printf("�������\n");
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
			switch(n){//switch����Ƕ�� 
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
			//break;//��whileѭ����,break�������õ���ֹѭ�� 
			continue;//continue����������������ѭ�� 
		printf("%d ",i);
		i++;
	}
}*/

/*
int main(){
	int ch = 0;
	while((ch = getchar())!=EOF)//EOF - end of file - �ļ�������־ 
	//getc,getwc,getchar,getwchar
	//read a charater from a stream(getc,getwc),or get a character from stdin(getchar,getwchar) 
		putchar(ch);
	//ctrl+z - getchar ������ȡ 
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
	printf("����������:>");//123456 abc 
	scanf("%s",password); //123456 
	printf("��ȷ������(Y/N):>");
	//��������
	//getchar();//����\n //���ܿո� 
	int temp = 0;
	while((temp=getchar())!='\n');//���ջ����������ַ� 
	int ch = getchar();//abc\n 
	if(ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n"); 
}*/

