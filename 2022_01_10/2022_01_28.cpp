#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(){
//	int a = 10;//初始化
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//	int arr2[10] = {1,2,3,4,5};//不完全初始化
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
//	int arr2[3][4] = {1,2,3,4,5,6,7};//不完全初始化 - 后面补0
//	int arr3[3][4] = {{1,2},{3,4},{5,6}};
//	int arr4[][4] = {{1,2},{3,4},{5,6}};//可以省略行不能省略列 
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
//void bubble_sort(int arr[],int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for(i = 0;i < sz - 1; i++){
//		//一趟冒泡排序的过程
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
//	//升序排序 - 冒泡排序 
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//arr是数组首元素的地址 
//	for(int i =0 ;i<10;i++)
//		printf("%d ",arr[i]);
//}

//数组名是什么？
//数组名 是数组首元素的地址
//但是有两个例外
//1.sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小单位是字节
//2.&数组名 -  数组名表示整个数组 - 取出的是整个数组的地址 
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

