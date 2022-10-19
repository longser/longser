#include <stdio.h>

void main()
{
		int a[10];
		int i=0;
		for(i=0;i<10;i++)
		{
			a[i]=i;
			printf("a[i]=%d\n",a[i]);
			printf("location=%d\n",&a[i]);
		}
		
}