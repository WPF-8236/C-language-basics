#include <stdio.h>
//���������������
//�ֲ�������������:���Ǳ������ڵľֲ���Χ
//ȫ�ֱ�����������:�������� 

//��������
//extern int g_val; 
//int g_val = 2022; 
//int main(){
//	printf("��������\n");
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

//��������
//�����Ĵ���������֮���ʱ���

//�ֲ���������������:����ֲ���Χ������ʼ,���ֲ��������� 
//ȫ�ֱ�������������: ������������� 
//int main(){
//	{
//		int a = 10;
//		printf("%d\n",a); 
//	}
//	return 0 ; 
//}


//����

//int main(){
//	//1.���泣��
//	/*
//		3.114;
//		10;
//		'a';
//		"abcd";
//	*/
//	
//	//2.const���εĳ�����
//
//	int num = 10;//����
//	num = 20;
//	printf("%d\n",num);//20
//	const int num2 = 10;//������ - ���г�����(���ܱ��ı������) 
//	num2 = 20;//���� 
//	
//	int arr[10] = {0};//10��Ԫ��
//	int n = 10;
//	int arr2[n] = {0};//����,n�Ǳ����� 
//	
//	const int n2 = 10;//n2�ǳ����� 
//	int arr3[n2] = {0};//����,n2���Ǳ����� 
//	
//	//3.#define ����ı�ʶ������
//	#define MAX 10
//	int n = MAX;
//	printf("%d\n",MAX);//10
//		 
//}

//4.ö�ٳ���
//����һһ�оٵĳ���
//�Ա� 
//enum Sex{
//	MALE,
//	FEMALE,
//	SECRET,	//����ö�ٱ�����δ����ȡֵ 
//	a = 10 //����ֵ 
//};
//
//int main(){
//	enum Sex s = MALE;
//	MALE = 3;//���� 
//	printf("%d\n",MALE);	//0
//	printf("%d\n",FEMALE);	//1
//	printf("%d\n",SECRET);	//2
//	return 0;
//}