#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(){
//	int a = 10;//��ʼ��
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
//	int arr2[10] = {1,2,3,4,5};//����ȫ��ʼ��
//	int arr3[] = {1,2,3,4,5};// int arr3[5] = {1,2,3,4,5};
//	
//	char ch1[5] = {'h','h','h'};//h h h \0 \0
//	char ch2[] = {'h','h','h'};//h h h
//	
//	char ch3[6] = "hehe";//h e h e \0 0
//	char ch4[] = "hehe";//h e h e \0
//} 

//int main(){
//	int arr[10] = {0};
//	arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i = 0;i < sz; i++)
//		printf("%d ",arr[i]);//0 0 0 0 5 0 0 0 0 0
//}

//int main(){
////	int arr[10] = {0};
////	int i = 0;
////	for(i = 0;i < 10;i++)
////		printf("&arr[%d] = %p\n",i,&arr[i]);
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;
//	for(int i = 0;i < 10;i++){
//		printf("%d ",*p);
//		p++;
//	}
//}

//int main(){
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int arr2[3][4] = {1,2,3,4,5,6,7};//����ȫ��ʼ�� - ���油0
//	int arr3[3][4] = {{1,2},{3,4},{5,6}};
//	int arr4[][4] = {{1,2},{3,4},{5,6}};//����ʡ���в���ʡ���� 
//	
//	int *p = &arr4[0][0];
//	for(int i =0 ;i<12;i++){
//		printf("%d ",*p);
//		p++;
//	}
//	//for(int i = 0;i<3;i++){
////		for(int j = 0;j<4;j++)
////			printf("&arr4[%d][%d] = %p\n",i,j,&arr4[i][j]);
////	} 
//	
//}
//void bubble_sort(int arr[],int sz)//�β�arr������ָ��
//{
//	//ȷ������
//	int i = 0;
//	for(i = 0;i < sz - 1; i++){
//		//һ��ð������Ĺ���
//		int j = 0;
//		for(j = 0; j < sz -1-i;j++){
//			if(arr[j] > arr[j + 1]){
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1]=temp;
//			}
//		} 
//	} 
//}
//
//int main(){
//	int arr[] = {9,5,3,7,4,3,6,8,1,2};
//	//�������� - ð������ 
//	//��������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//arr��������Ԫ�صĵ�ַ 
//	for(int i =0 ;i<10;i++)
//		printf("%d ",arr[i]);
//}

//��������ʲô��
//������ ��������Ԫ�صĵ�ַ
//��������������
//1.sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С��λ���ֽ�
//2.&������ -  ��������ʾ�������� - ȡ��������������ĵ�ַ 
//int main(){
//	int arr[10]={0};
//	printf("%p\n",&arr[0]);
//	printf("%p\n",arr);
//	printf("%d\n",sizeof(arr));
//	printf("%p\n",&arr);
//	
//	printf("%p\n",&arr);
//	printf("%p\n",&arr + 1);
//	printf("%p\n",arr);
//	printf("%p\n",arr + 1);
//} 

