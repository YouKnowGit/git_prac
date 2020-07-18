#include <stdio.h>

int main(void)
{
	char d[20];
	scanf("%s",d);

	for (int i=0;i<21;i++)
	{
		if(d[i]=='\0')
			break;
		printf("\'%c\'\n",d[i]);
	}
	return 0;
}
