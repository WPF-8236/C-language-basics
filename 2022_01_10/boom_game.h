#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9


#define ROWS ROW+2
#define COLS COL+2

//��ʼ������
void InitBoard(char board[ROWS][COLS],int rows,int cols,char ch); 
//��ӡ���� 
void DisplayBoard (char board[ROWS][COLS],int row,int col);
//������
void SetMine (char board[ROWS][COLS],int row,int col);
//�Ų��� 
void FindMine (char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);