#include<stdio.h>

int main() {
	int a, b, i;
	char ch;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &ch);
	a = ch;
	printf("%d\n", a);

	for (i = 0; i <= 7; i++) {
		b = ch;
		if ((b >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}