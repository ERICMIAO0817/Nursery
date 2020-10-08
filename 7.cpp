#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[20];
	scanf("%s",name);
	printf("%s hi,your name contains %zd letters.",name,sizeof name);
	return 0;
}
