#include <stdio.h>



void main()
{
	int *p;
	int a=0x66;
	p=&a;	
 	printf("a=%d\n",a);
	printf("size=%d\n",sizeof(p));
	printf("p=%d\n",p);
		
}