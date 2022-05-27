#include "boom_game.h"

void InitBoard(char board[ROWS][COLS],int rows,int cols,char ch){
	for(int i = 0;i<rows;i++)
		for(int j=0;j<cols;j++)
			board[i][j] = ch;
}
void DisplayBoard (char board[ROWS][COLS],int row,int col){
	printf("-------------ɨ����Ϸ------------\n");
	for(int i=0;i<=col;i++)
		printf("%d ",i);
	printf("\n");
	int i=0,j=0;
	for(i=1;i<=row;i++){
		printf("%d ",i);
		for(j=1;j<=col;j++){
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("-------------ɨ����Ϸ------------\n");
}

void SetMine (char board[ROWS][COLS],int row,int col){
	//����ʮ����
	int count = EASY_COUNT;
	while(count){
		//��������±� 
		int x = rand()%row+1;
		int y = rand()%col+1;
		if(board[x][y] == '0'){
			board[x][y]='1';
			count--;		
		}
	
	} 
}

static int get_mine_count (char mine[ROWS][COLS],int x,int y){
	return mine[x-1][y]+
			mine[x-1][y-1]+
			mine[x][y-1]+
			mine[x+1][y-1]+
			mine[x+1][y]+
			mine[x+1][y+1]+
			mine[x][y+1]+
			mine[x-1][y+1]-8*'0';
}

void FindMine (char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col){
	//1.�����Ų������
	//2.������괦�ǲ�����
		//1.���� - ��Ϸ����
		//2.������ -  ͳ��������Χ�м����� - �洢�Ų��׵���Ϣ��show����,��Ϸ����
	int x = 0;
	int y = 0;
	int win = 0;
	while(win<row*col-EASY_COUNT){
		printf("������Ҫ�Ų������:>");
		scanf("%d %d",&x,&y);
		//�ж�����Ϸ���
		if(x>=1&&x<=row&&y>=1&&y<=col){
			if(mine[x][y]=='1'){
				printf("���ź�,�㱻ը����\n");
				DisplayBoard(mine,row,col);
				break;
			}else{
				int count = get_mine_count(mine,x,y);
				show[x][y]=count+'0';
				DisplayBoard(show,row,col);
				win++;
			}
		} else{
			printf("���겻�Ϸ�,����������\n");
		}
	}
	if(win==row*col-EASY_COUNT){
		printf("��ϲ��,���׳ɹ�\n");
		DisplayBoard(mine,row,col);
	}
	 
}