//#include "boom_game.h"
//
//void menu(){
//	printf("********************\n");
//	printf("***    1.play    ***\n");
//	printf("***    0.exit    ***\n");
//	printf("********************\n");
//}
//void game(){
//	char mine[ROWS][COLS]={0};//��Ų��úõ��׵���Ϣ
//	char show[ROWS][COLS]={0};//����Ų�����׵���Ϣ 
//	//��ʼ������
//	InitBoard(mine,ROWS,COLS,'0');//'0*
//	InitBoard(show,ROWS,COLS,'*');//'*'
//	//��ӡ����
//	//DisplayBoard(mine,ROW,COL);
//	DisplayBoard(show,ROW,COL);
//	
//	//������
//	SetMine(mine,ROW,COL);
//	//DisplayBoard(mine,ROW,COL);
//	//�Ų��� 
//	FindMine(mine,show,ROW,COL);
//}
//int main(){
//	int input = 0;
//	srand((unsigned int)time(NULL)); 
//	do{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//		switch(input){
//			case 1:
//				printf("ɨ��\n");
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("ѡ�����,����ѡ��\n"); 
//				break;
//		}
//	}while(input);
//}