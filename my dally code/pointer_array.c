#include <stdio.h>

void main()
{
		int a[10];
		int *p;
		int i;
		p=a;
		for(i=0;i<10;i++)
		{
				a[i]=i;
				p=a[i];
				printf("p=%d\n",p);
				printf("a=%d\n",a[i]);
		}
		
}