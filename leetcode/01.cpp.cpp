//#include<stdio.h>
//#include<windows.h>
//#include<mmsystem.h>
//#include<conio.h>
//#include<time.h>
//#include"resource.h"
//#pragma comment(lib, "winmm.lib")
////封面函数
//void firstpage()
//{
//	printf("《欢迎来到贪吃蛇的世界》\n");
//	printf("《请按空格键开始游戏》\n");
//	printf("《用w a s d 控制蛇的上下左右》\n");
//}
////判断是否开始游戏
//char input;
//void testspace()
//{
//	while (1)
//	{
//		
//		input = _getch();
//		if (' ' == input)
//		{
//			break;
//		}
//	}
//}
////打印背景
//int g[21][23] = {
//	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//};
//void printback()
//{
//	int i = 0, j = 0;
//	while (1)
//	{
//		system("cls");
//		for (i = 0; i < 21; i++){
//			for (j = 0; j < 23; j++){
//				if (g[i][j] == 1){
//					printf("█");
//				}
//				else printf("  ");
//			}
//			printf("\n");
//		}
//		Sleep(2000);
//	}
//	
//}
////确定蛇头位置
//int x, y;
//int snake[100][3] = { 0 };
//void setpos()
//{
//	 x = -1, y = -1;
//	srand(time(NULL));
//	x = rand() % 18 + 1;
//	y = rand() % 15 + 1;
//	//画蛇头
//	
//	snake[0][0] = y;
//	snake[0][1] = x ;
//	snake[0][2] = 1;
//	snake[1][0] = y;
//	snake[1][1] = x+1;
//	snake[1][2] = 1;
//	snake[2][0] = y;
//	snake[2][1] = x+2;
//	snake[2][2] = 1;
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		g[snake[i][0]][snake[i][1]] = 1;
//	}
//}
////蛇动
//void snakemove()
//{
//	while (snake[0][1] != 0){
//		int i = 100;
//		for (i; i >= 1; i--){
//			if (snake[i][0] == 0){
//				continue;
//			}
//			snake[i][0] = snake[i - 1][0];
//			snake[i][1] = snake[i - 1][1];
//			snake[i][2] = snake[i - 1][2];
//		}
//		snake[0][1] -= 1;
//		int j = 0;
//		for (j = 0; j < 3; j++){
//			g[snake[j][0]][snake[j][1]] = 1;
//		}
//		printback();
//	}
//}
//
//int main(){
//	system("color 4f");
//	firstpage();//封面
//	testspace();//开始游戏
//	system("cls");
//	setpos();//确定蛇头
//	snakemove();
//	
//	
//	
//	return 0;
//}
//0   4   8     12
//1 3 5 7 9  11 13
//2   6   10    

//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string s;
//	int numRows;
//	cin >> s >> numRows;
//	string t;
//	int m = numRows;
//	for (int i = 0; i < s.size(); i += 2*m-2){
//		t += s[i];
//	}
//	for (int i = 1; i < m - 1; i++){
//		for (int j = i; j < s.size(); j += m - 1){
//			t += s[j];
//		}
//	}
//	for (int i = m - 1; i < s.size(); i += 2 * m - 2){
//		t += s[i];
//	}
//	cout << t;
//	return 0;
//
//}

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int countSegments(string s);
int main(){
	string s;
	cin >> s;
	int k = countSegments(s);
	cout << k;
	return 0;
}
int countSegments(string s) {
	string word;
	int cnt = 0;
	int i = 0;
	while (s[i] == ' '){
		i++;
	}
	int k = s.size() - 1;
	while (s[k] == ' '){
		k--;
	}
	for (i; i <= k; i++){
		if (s[i] != ' '){
			word += s[i];
			if (i == k) cnt++;
		}
		else{
			if (word != "")  {
				cnt++;
				word = "";
			}
		}

	}
	return cnt;
}