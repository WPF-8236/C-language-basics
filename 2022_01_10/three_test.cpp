//#include "three_game.h"
//
//void menu(){
//	printf("********************\n");
//	printf("***    1.play    ***\n");
//	printf("***    0.exit    ***\n");
//	printf("********************\n");
//}
//void game(){
//	�洢���� - ��ά����
//	char board[ROW][COL];
//	��ʼ������ - ��ʼ���ո�
//	InitBoard(board,ROW,COL);
//	��ӡ���� - �����Ǵ�ӡ��������� 
//	DisplayBoard(board,ROW,COL);
//	char ret = 'C';
//	while(1){
//		�������
//		PlayerMove(board,ROW,COL);
//		DisplayBoard(board,ROW,COL);
//		ret = IsWin(board,ROW,COL);
//		if(ret != 'C')
//			break;
//		�������� 
//		ComputerMove(board,ROW,COL);
//		DisplayBoard(board,ROW,COL);
//		ret = IsWin(board,ROW,COL);
//		if(ret != 'C')
//			break;
//	}
//	if(ret == '*'){
//		printf("���Ӯ��\n");
//		DisplayBoard(board,ROW,COL);
//	}else if(ret == '#'){
//		printf("����Ӯ��\n");
//		DisplayBoard(board,ROW,COL);
//	} else{
//		printf("ƽ��\n");
//		DisplayBoard(board,ROW,COL);
//	}
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
//				printf("��������Ϸ\n");
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