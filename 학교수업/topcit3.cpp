#include <stdio.h>

int stack[100];
int top = 0;
// ���� ����
int push(int n) // �� ����ֱ�
{
	stack[top++] = n;

	return 0;
}
int pop() // �� ����
{
	return stack[--top];
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	push(n);
	scanf("%d", &n);
	push(n);
	scanf("%d", &n);
	push(n);
	scanf("%d", &n);
	push(n);
	for (int i = 0; i < 4; i++)
		printf("%4d", stack[i]);
	for (int i = 0; i < 4; i++)
		printf("%4d", pop());

	return 0;
}