#include<stdio.h>
#define SIZE 10
int clac()
{
	while (1)
	{
		int a;
		int h;
		printf("==================================================");
		printf("============보고싶은 사이즈를 정히사오============");
		printf("==================================================");
		scanf_s("%d", &h);
		int i, n, j, k, m;
		for (int i = 0; i < h; i++)
		{
			printf(" ");
			for (int n = h; n > h - i; n--)
			{
				printf(" ");
			}

			for (int j = h; j > i; j--)
			{
				printf("*");
			}
			for (int k = h; k > i; k--)
			{
				printf("*");
			}
			printf("\n");
		}
		for (int i = 0; i < h; i++)
		{
			for (int n = h; n > i; n--)
			{
				printf(" ");
			}
			for (int j = 0; j < i + 1; j++)
			{
				printf("*");
			}
			for (int k = 0; k < i + 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("1.계속  2.중지 ");
		scanf_s("%d", &a);
		if (a == 1)
		{
			continue;
		}
		else if (a == 2)
		{
			break;
		}
	}
}
int numnum()
{
	while (1)
	{
		int a;
		int b;
		printf("==================================================");
		printf("오름차순을 보고싶으면 1 내립차순을 보고싶으면 2 : ");
		printf("==================================================");
		scanf_s("%d", &b);
		if (b == 1)
		{
			int n;
			int list[SIZE];		//list[0],[1],[2]···[9]까지
			for (n = 0; n < SIZE; n++)	//반복을 하여 list[n]에 정수를 저장
			{
				printf("정수를 입력하시오 : ");
				scanf_s("%d", &list[n]);
			}
			int i, j, tmp, least;
			for (i = 0; i < SIZE - 1; i++)
			{
				least = i;
				for (j = i + 1; j < SIZE; j++)
					if (list[j] < list[least])		//list[j]값이 list[least]값보다 작으면
						least = j;					//least에 j값을 넣는다.
				tmp = list[i];		//tmp에 list[i]값을 넣는다.
				list[i] = list[least];	//list[i]에 list[least]값을 넣는다.
				list[least] = tmp;	//list[least]에 tmp값을 넣는다.
			}
			for (i = 0; i < SIZE; i++)
				printf("%d\n", list[i]);
			printf("\n");

		}
		else if (b == 2)
		{
			int n;
			int list[SIZE];
			for (n = 0; n < SIZE; n++)
			{
				printf("정수를 입력하시오 : ");
				scanf_s("%d", &list[n]);
			}
			int i, j, tmp, max;
			for (i = 0; i < SIZE - 1; i++)
			{
				max = i;
				for (j = i + 1; j < SIZE; j++)
					if (list[j] > list[max])
						max = j;
				tmp = list[i];
				list[i] = list[max];
				list[max] = tmp;

			}
			for (i = 0; i < SIZE; i++)
				printf("%d\n", list[i]);
			printf("\n");

		}
		else
		{
			printf("오류 ^_^");

		}
		printf("1.계속  2.중지 ");
		scanf_s("%d", &a);
		if (a == 1)
		{
			continue;
		}
		else if (a == 2)
		{
			break;
		}
	}
}
int dalpang()
{

		int a;
		int arr[20][20] = { 0 }; // arr 배열함수 초기화
		int x = 0, y = 0, num_Plus = 0; // x, y 좌표 값
		int n, cd; // input 변수, cd = Condition 변수
		int i, j, l, k; // 위 아래 왼쪽 오른쪽 변수
		int count = 0; // count 숫자 증가 변수


		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n);

		cd = n;
		while (1)
		{
			for (i = num_Plus; i < cd; i++) // 좌 -> 우
			{
				arr[y][i] = ++count;
			}

			for (j = num_Plus; j < cd - 1; ++j) // 위 -> 아래
			{
				arr[j + 1][i - 1] = ++count;
			}

			for (l = cd - 2; l >= num_Plus; l--) //우 -> 좌
			{
				arr[j][l] = ++count;
			}

			for (k = cd - 2; k > num_Plus; k--) // 아래 -> 위
			{
				arr[k][l + 1] = ++count;
			}

			num_Plus++; // 전체적으로 num_Plus 증가시켜 좌표위치 증가
			y++;
			cd--;
			j += 2;

			if (count == n * n)
			{
				for (y = 0; y < n; y++)
				{
					for (x = 0; x < n; x++)
					{
						printf("%3d", arr[y][x]);
					}
					printf("\n");
				}
				return 0;
			}

		}
		return 0;

}

int main()
{
	while (1)
	{
		int a, b;
		printf("===========================================================================================================================\n");
		printf("=== 모래시계를 그림을 보고 싶으면 0 오름차순 내립차순 프로그램을 보고싶으면 1 달팽이모양으로 커지는 행렬을 보고싶으면 5 ===\n");
		printf("===========================================================================================================================\n");
		scanf_s("%d", &a);
		if (a == 0)
		{
			clac();
		}
		else if (a == 1)
		{
			numnum();
		}
		else if (a == 5)
		{
			while (1)
			{
				dalpang();
				printf("1.계속  2.중지 ");
				scanf_s("%d", &b);
				if (b == 1)
				{
					continue;
				}
				else if (b == 2)
				{
					break;
				}
			}
		}
		else
		{
			printf("오류");
		}
		continue;
	}
}