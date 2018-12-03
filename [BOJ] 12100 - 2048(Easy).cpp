#include <bits/stdc++.h>
using namespace std;

int n;
int board[20][20];
int ans = 0;

void move(int direct, int arr[][20]); //어느 방향으로 이동할지 결정한다.
void reset(int num1[][20], int num2[][20]); //num1내용을 num2내용으로 초기화한다.
void up(int arr[][20]); //위로 이동시킨다.
void down(int arr[][20]); //아래로 이동시킨다.
void right(int arr[][20]); //오른쪽으로 이동시킨다.
void left(int arr[][20]); //왼쪽으로 이동시킨다.
void dfs(int arr[][20], int direc, int count); //재귀함수 이동경로를 구한다.

struct prevNode{  //판안의 숫자들 이동시킬때 사용한다.
	int  value, x,y;
};
int main()
{
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%d", &board[i][j]);
	}
	int origin[20][20];
	reset(origin, board); //판의 원본 상태를 복사한다.

	dfs(board, 0, 0); //위쪽 이동방향으로 움직인다.
	reset(board, origin); //다시 판의 원본상태로 돌린다.
	dfs(board, 1, 0); //아래쪽으로 움직인다.
	reset(board, origin);
	dfs(board, 2, 0); //왼쪽으로 움직인다.
	reset(board, origin);
	dfs(board, 3, 0); //오른쪽으로 움직인다.

	printf("%d", ans);
	return 0;
}

void reset(int num1[][20], int num2[][20])//num1배열을 num2로 초기화
{
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
			num1[i][j] = num2[i][j];
}

void up(int arr[][20]) {
	prevNode p; //이전 값을 저장한다.
	for (int i = 0; i < n; i++)
	{
		p.value = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[j][i] != 0) //0이 아닐때만
			{
				if (arr[j][i] == p.value)//이전것과 같으면 합쳐질수있음.
                //합쳐진 블록은 다시 합쳐질 수 없기 때문에 p.value 다시 0으로 초기화한다.
					arr[p.y][p.x] += p.value, arr[j][i] = 0, p.value = 0;
                //합칠 수 없는 경우 p.value에 현재 값과 index를 저장한다.
				else p.value = arr[j][i], p.y = j, p.x = i;
			}
		}
	}//합치기 끝
	for (int i = 0; i < n; i++) //위치에 따라 재배열 한다.
	{
		int index = 0; //값이 들어갈 index기록한다.
		for (int j = 0; j < n; j++)
		{
			if (arr[j][i] != 0)
			{
				if (index != j) //현재랑 같지 않을때만 (같을 경우에는 굳이 값을 넣어줄 필요가 없다.)
					arr[index][i] = arr[j][i],  arr[j][i] = 0;
				index++;
			}
		}
	} //재배열 끝
}
void down(int arr[][20])
{
	prevNode p;
	for (int i = 0; i < n; i++)
	{
		p.value = 0;
		for (int j = n-1; j >= 0; j--)
		{
			if (arr[j][i] != 0)
			{
				if (arr[j][i] == p.value)//이전것과 같아서 합쳐질수있음 합쳐진 블록은 다시 합쳐질 수 없음
					arr[p.y][p.x] += p.value, arr[j][i] = 0, p.value = 0;
				else p.value = arr[j][i], p.y = j, p.x = i;
			}
		}
	}//합치기 끝
	for (int i = 0; i < n; i++) 		//위치에 따라 재배열
	{
		int index = n-1;
		for (int j = n-1; j >=0; j--)
		{
			if (arr[j][i] != 0)
			{
				if (index != j)
					arr[index][i] = arr[j][i], arr[j][i] = 0;
				index--;
			}
		}
	} //재배열 끝
}
void left(int arr[][20])
{
	prevNode p;
	for (int i = 0; i < n; i++)
	{
		p.value = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] != 0)
			{
				if (arr[i][j] == p.value)//이전것과 같아서 합쳐질수있음 합쳐진 블록은 다시 합쳐질 수 없음
					arr[p.y][p.x] += p.value, arr[i][j] = 0, p.value = 0;
				else p.value = arr[i][j], p.y = i, p.x = j;
			}
		}
	}//합치기 끝
	for (int i = 0; i < n; i++) 		//위치에 따라 재배열
	{
		int index = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] != 0)
			{
				if (index != j)
					arr[i][index] = arr[i][j], arr[i][j] = 0;
				index++;
			}
		}
	} //재배열 끝
}
void right(int arr[][20])
{
	prevNode p;
	for (int i = 0; i < n; i++)
	{
		p.value = 0;
		for (int j = n-1; j >=0; j--)
		{
			if (arr[i][j] != 0)
			{
				if (arr[i][j] == p.value)//이전것과 같아서 합쳐질수있음 합쳐진 블록은 다시 합쳐질 수 없음
					arr[p.y][p.x] += p.value, arr[i][j] = 0, p.value = 0;
				else p.value = arr[i][j], p.y = i, p.x = j;
			}
		}
	}//합치기 끝
	for (int i = 0; i < n; i++) 		//위치에 따라 재배열
	{
		int index = n-1;
		for (int j = n-1; j >=0; j--)
		{
			if (arr[i][j] != 0)
			{
				if (index != j)
					arr[i][index] = arr[i][j], arr[i][j] = 0;
				index--;
			}
		}
	} //재배열 끝
}
void move(int direc, int arr[][20])//0 1 2 3 상 하 좌 우
{
	if (direc == 0)  up(arr);
	else if (direc == 1) down(arr);
	else if (direc == 2) left(arr);
	else  right(arr);
}
void dfs(int arr[][20],int direc,int count)
{
	if (count >= 5) { //5번 움직였을 경우
		int max = 0;
		for (int i = 0; i < n; i++) //판에서 제일 큰 숫자를 찾는다.
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[i][j] > max)
					max = arr[i][j];
			}
		}
		if (max > ans) //답과 비교해, 답보다 크면 값 변경한다.
			ans = max;
		return;
	}//end count 5
	int map[20][20] = { 0, };
	//direction 방향으로 이동 0 1 2 3 상 하 좌 우
	move(direc,arr);//인자로 들어온 direc 방향으로 이동시킨다.
	reset(map, arr);
	//다음 카운트 자신 방향 제외 호출
	//초기화 하고 호출
	dfs(arr, (direc + 1) % 4, count + 1);
	reset(arr, map); //원본배열로 다시 초기화
	dfs(arr, (direc + 2) % 4, count + 1);
	reset(arr, map); //원본배열로 다시 초기화
	dfs(arr, (direc + 3) % 4, count + 1);
	reset(arr, map); //원본배열로 다시 초기화
	
	return;
}