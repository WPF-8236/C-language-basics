#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�ַ�������һ���ַ�----��˫������������һ���ַ��� 
/*
int main(){
	"abdc";
	char arr[] = "Hello FH-QY";//�ַ����� - ������һ����ͬ���͵�Ԫ��
	 //�ַ����ڽ�β��λ��������һ��\0���ַ�,\0Ϊ�ַ����Ľ�����־ 
 	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};//��ͬ���������벻ͬ,���ݱ�����Ϊ׼ ,��������������ڴ�洢���ַ�����δ֪ 
 	printf("%s\n",arr1);
 	printf("%s\n",arr2);//���ܻ����������� ,��Ϊ��֪��������\0 
 	
 	//��֤�ַ������� - - string length - - strlen() - - string.h
	 printf("%d\n",strlen("abc"));//3 ,������\0 
	 printf("%d\n",strlen(arr1));//3 ,������\0 
	 printf("%d\n",sizeof(arr1));//4 ,����\0 
	 printf("%d\n",strlen(arr2));//���ֵ ��Ϊ��֪��������\0 
	 return 0;	 
}*/

/*
int main(){
	printf("c:\test\test.c\n");//c:      est     est.c
	//ת���ַ� 
	printf("c:\test\test.c??)\n");// ??) ת��Ϊ ] - ����ĸ��,�˴���������ӡ??)��]
	\? - ��������ʺų��ַ�ֹ����Ϊ����ĸ��
	\' - ���ڱ�ʾ�ַ�����'
	\" - ���ڱ�ʾ�ַ�����"
	\\ - ���ڱ�ʾ�ַ�����\,����ֹ����Ϊת�����з�
	\a - �����ַ�,����
	\b - �˸��
	\f - ��ֽ�� 
	\n - ���з� 
	\r - �س��� 
	\t - ˮƽ�Ʊ�� 
	\v - ��ֱ�Ʊ��
	\ddd - ddd��ʾ1~3���˽�����,\130 - X
	\xdd - dd��ʾ2��ʮ��������,\x30 - 0 
	printf("%d\n",strlen("c:\test\328\test.c"));//14
}
*/

/*
int main(){
	int input = 0;//�����ֵ 
	printf("�����������:>");
	printf("��Ҫ�ú�ѧϰ��(1/0)?>:");
	scanf("%d",&input);
	if(input == 1)
		printf("��offer\n");
	else
		printf("������\n"); 
}*/

/*
int main(){
	int line = 0;
	//ѭ�� 
	while(line<30000){
		printf("д����\n");
		line++;
	}
	if(line == 30000)
		printf("��offer\n");
} */


/*
int Add(int x,int y){
	return x+y;
}
int main(){
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d",&num1,&num2);
	//���㷽ʽ 
	int sum = num1 + num2;
	//������ʽ
	sum = Add(num1,num2); 
	printf("%d\n",sum);
} */

/*
int main(){
	//���� - һ����ͬ���͵�Ԫ�صļ���
	//10������1-10����
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	char ch[5] = {'a','b','c'};//����ȫ��ʼ��,ʣ���Ĭ��Ϊ0
	//����arr,ͨ�������±�,�����±��0��ʼ���� 
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
	int d = 9 % 2;//ȡģ 
	printf("%d\n",a);//4
	printf("%f\n",b);//4.000000
	printf("%f\n",c);//4.500000
	printf("%d\n",d);//1
	
	int e = 2;
	int f = e<<1;//�ƶ����Ƕ�����λ 
	printf("%d\n",f);//4
 
 	printf("%d\n",-0);
} */

//C�����ṩ�Ĺؼ���
//1.C�����ṩ��,�����Լ������ؼ���
//2.�ؼ��ֲ�����Ϊ������ 
/*
int main(){
	{
		auto int a = 10;//�Զ�����,�Զ����ٵ��Զ�����,auto���ξֲ����� 
		//autoʡ�� 
	}
} */

/*
//define��һ��Ԥ����ָ��
//define�������
#define MAX 1000
//define�����
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
	int a = 10;//a���ڴ���Ҫ����4���ֽڿռ�
	printf("%p\n",&a); //0060FF24
	int* pa = &a;//pa������ŵ�ַ��,��Ϊָ�����,*˵��paʹָ�����,int˵��paִ�еĶ�����int����
	
	char ch = 'w';
	char* pch = &ch; 
	
	*pa = 20;//*�����ò���,*pa����ͨ��pa��ĵ�ַ,�ҵ�a
	printf("%d\n",a); 
	
	//ָ���С,ָ���Сȡ���ڵ�ַ�Ĵ洢��С 
	printf("%d\n",sizeof(char*)); //4
	printf("%d\n",sizeof(int*)); //4
	printf("%d\n",sizeof(short*)); //4
	printf("%d\n",sizeof(long*)); //4
	printf("%d\n",sizeof(long long*));//4 
	printf("%d\n",sizeof(float*)); //4
	printf("%d\n",sizeof(double*)); //4
}*/
/*
//�ṹ�������C���Դ����µ�����
//����һ��ѧ��
struct Stu{
	char name[20];
	int age;
	double score;
};
//����һ���������
struct Book{
	char name[20];
	float price;
	char id[30];
};

int main(){
	struct Stu s = {"����",20,89.8};//�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %lf\n",s.name,s.age,s.score);//.���� ���� 20 89.800000
	struct Stu * ps = &s;
	printf("%s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);//.���� ���� 20 89.800000
	printf("%s %d %lf\n",ps->name,ps->age,ps->score);//->���� ���� 20 89.800000
}*/