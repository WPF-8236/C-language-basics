//#include "three_game.h"
//void InitBoard (char board[ROW][COL],int row,int col){
//	for(int i = 0;i < row;i++){
//		for(int j = 0;j < col;j++){
//			board[i][j] = ' ';
//		}
//	}
//}
//
//void DisplayBoard (char board[ROW][COL],int row,int col){
//	for(int i = 0;i < row;i++){
//		for(int j = 0;j < col;j++){
//			printf(" %c ",board[i][j]);
//			if(j<col-1)
//				printf("|");
//		}
//		printf("\n");
//		if(i < row - 1){
//			for(int j = 0;j < col;j++){
//				printf("---");
//				if(j < col - 1)
//					printf("|");
//			}
//		}
//		printf("\n");
//	}
//}
//
//void PlayerMove (char board[ROW][COL],int row,int col){
//	int x = 0;
//	int y = 0;
//
//	printf("�����:>\n");
//	while(1){
//		printf("���������������:>");
//		scanf("%d %d",&x,&y);
//		//�ж�����Ϸ���
//		if(x>=1&&x<=row&&y>=1&&y<=col){
//			//����
//			//�����Ƿ�Ϊ��
//			if(board[x-1][y-1] == ' '){
//				board[x-1][y-1] = '*';
//				break;
//			} else
//				printf("���걻ռ��,����������\n");
//		} else
//			printf("����Ƿ�,����������\n");
//	}
//}
//
//void ComputerMove (char board[ROW][COL],int row,int col){
//	printf("������:>\n");
//	while(1){
//		int x = rand()%row;
//		int y = rand()%col;
//		if(board[x-1][y-1] == ' '){
//			board[x-1][y-1] = '#';
//			break;
//		}
//	}
//}
//int IsFull (char board[ROW][COL],int row,int col){
//	for(int i = 0;i<row;i++)
//		for(int j = 0;j<col;j++)
//			if(board[i][j]==' ')
//				return 0;
//	return 1;
//}
//
//char IsWin (char board[ROW][COL],int row,int col){
//	int i = 0;
//	//�ж����� 
//	for(i = 0;i<row;i++){
//		if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]&&board[i][1]==board[i][2]&&board[i][1]!=' '){
//			return board[i][1];
//		}
//	}
//	//�ж�����
//	 for(i = 0;i<col;i++){
//		if(board[0][i]==board[1][i]&&board[0][i]==board[2][i]&&board[1][i]==board[2][i]&&board[1][i]!=' '){
//			return board[1][i];
//		}
//	}
//	//�ж϶Խ� 
//	if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]&&board[1][1]==board[2][2]&&board[1][1]!=' '){
//			return board[1][1];
//	}
//	if(board[0][2]==board[1][1]&&board[0][2]==board[2][0]&&board[1][1]==board[2][0]&&board[1][1]!=' '){
//			return board[1][1];
//	}
//	//�ж�ƽ��
//	if(IsFull(board,ROW,COL))
//		return 'Q';
//	return 'C';
//}