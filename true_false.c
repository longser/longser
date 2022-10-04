
#include <stdio.h>
int a,b,c;
int main()
{
	a=0x0Cu;
	b=0x02u;
	c=a^b;
	printf("%d",c);
	return 0;	
}