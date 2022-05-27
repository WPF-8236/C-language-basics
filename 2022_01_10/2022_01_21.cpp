#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/*
int main(){
	int i = 0;
	for(i = 1;i <= 10; i++){
		if(i == 5)
			continue;
			//break;
			
		
		printf("%d ",i);
	}
} */

/*
int main(){
	int i = 0;
	int j = 0;
	for(;i < 3; i++){
		for(;j < 3; j++){
			printf("hehe\n");
		}
	}
} */
/*
int main(){
	int i = 0;
	int k = 0;
	for(i = 0,k = 0;k = 0;i++,k++)
		k++;
}*/

/*
int main(){
	int i = 1;
	do{
		if(i == 5)
			continue;
		printf("%d ",i);
		i++;
	}while(i<10);
}*/

////1.计算n的阶乘 
//int main(){
//	int n = 0;
//	int sum = 1;
//	scanf("%d",&n);
//	for(int i = n;i > 0;i--)
//		sum *= i;
//	printf("%d\n",sum);
//}

////2.计算 1!+2!+3!+4!+...+10!
//int main(){
//	int sum = 0;
//	int temp = 1;
//	for(int i = 1;i <= 10;i++){
//		temp = 1;
//		for(int j = i;j > 0;j--)
//			temp *= j;
//		sum += temp;
//	}
//	printf("%d\n",sum);
//} 

////3.在有序数组查找n
//int binserach(int x,int v[],int n){
//	for(int i = 0;i < n;i++){
//		if(v[i] == x)
//			return x;
//	}
//	return 0;
//}
//int main(){
//	int x = 0;
//	scanf("%d",&x);
//	int v[] = {
//		1,2,3,4,5,6,7,8
//	};
//	int n = 8;
//	if(binserach(x,v,n))
//		printf("查找成功\n");
//	else
//		printf("查找失败\n"); 
//}

//int main(){
//	int i = 0;
//	int j = 18;
//	char arr[]={'w','e','l','c','o','m','e',' ','t','o',' ','f','h','q','y','!','!','!','!','\0'};
//	char arr2[]={'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','\0'};
//	while(i<=j){
//		arr2[i]=arr[i];
//		arr2[j]=arr[j];
//		printf("%s\n",arr2);
//		i++;
//		j--;
//	}
//}

//int main(){
//	int i = 0;
//	int max = 3;
//	while(i < max){
//		int j = 0;
//		printf("输入密码:>"); 
//		scanf("%d",&j);
//		if(j==123456){
//			printf("密码正确\n");
//			break;	
//		}	
//		else
//			printf("密码错误\n");
//		i++; 
//	} 
//}