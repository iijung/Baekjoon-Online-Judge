#include <stdio.h>

void	f(int d, int n)
{
	if (d == n)
	{
		for (int i = 0; i < d * 4; i++)
			printf("_");
		printf("\"����Լ��� ������?\"\n");
		for (int i = 0; i < d * 4; i++)
			printf("_");
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		for (int i = 0; i < d * 4; i++)
			printf("_");
		printf("��� �亯�Ͽ���.\n");
		return ;
	}
	for (int i = 0; i < d * 4; i++)
		printf("_");
	printf("\"����Լ��� ������?\"\n");
	for (int i = 0; i < d * 4; i++)
		printf("_");
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	for (int i = 0; i < d * 4; i++)
		printf("_");
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	for (int i = 0; i < d * 4; i++)
		printf("_");
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	f(d + 1, n);
	for (int i = 0; i < d * 4; i++)
		printf("_");
	printf("��� �亯�Ͽ���.\n");
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	f(0, n);
	return (0);
}
