#include<stdio.h>
#define SIZE 10
int clac()
{
	while (1)
	{
		int a;
		int h;
		printf("==================================================");
		printf("============������� ����� �������============");
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
		printf("1.���  2.���� ");
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
		printf("���������� ��������� 1 ���������� ��������� 2 : ");
		printf("==================================================");
		scanf_s("%d", &b);
		if (b == 1)
		{
			int n;
			int list[SIZE];		//list[0],[1],[2]������[9]����
			for (n = 0; n < SIZE; n++)	//�ݺ��� �Ͽ� list[n]�� ������ ����
			{
				printf("������ �Է��Ͻÿ� : ");
				scanf_s("%d", &list[n]);
			}
			int i, j, tmp, least;
			for (i = 0; i < SIZE - 1; i++)
			{
				least = i;
				for (j = i + 1; j < SIZE; j++)
					if (list[j] < list[least])		//list[j]���� list[least]������ ������
						least = j;					//least�� j���� �ִ´�.
				tmp = list[i];		//tmp�� list[i]���� �ִ´�.
				list[i] = list[least];	//list[i]�� list[least]���� �ִ´�.
				list[least] = tmp;	//list[least]�� tmp���� �ִ´�.
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
				printf("������ �Է��Ͻÿ� : ");
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
			printf("���� ^_^");

		}
		printf("1.���  2.���� ");
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
		int arr[20][20] = { 0 }; // arr �迭�Լ� �ʱ�ȭ
		int x = 0, y = 0, num_Plus = 0; // x, y ��ǥ ��
		int n, cd; // input ����, cd = Condition ����
		int i, j, l, k; // �� �Ʒ� ���� ������ ����
		int count = 0; // count ���� ���� ����


		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &n);

		cd = n;
		while (1)
		{
			for (i = num_Plus; i < cd; i++) // �� -> ��
			{
				arr[y][i] = ++count;
			}

			for (j = num_Plus; j < cd - 1; ++j) // �� -> �Ʒ�
			{
				arr[j + 1][i - 1] = ++count;
			}

			for (l = cd - 2; l >= num_Plus; l--) //�� -> ��
			{
				arr[j][l] = ++count;
			}

			for (k = cd - 2; k > num_Plus; k--) // �Ʒ� -> ��
			{
				arr[k][l + 1] = ++count;
			}

			num_Plus++; // ��ü������ num_Plus �������� ��ǥ��ġ ����
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
		printf("=== �𷡽ð踦 �׸��� ���� ������ 0 �������� �������� ���α׷��� ��������� 1 �����̸������ Ŀ���� ����� ��������� 5 ===\n");
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
				printf("1.���  2.���� ");
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
			printf("����");
		}
		continue;
	}
}