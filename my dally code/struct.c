#include <stdio.h>
int main()
{
		struct infor{
			long int Id_card;
			char sex;
			char name[20];
			char adress[20];			
		}a={360782,'M',"Longhui Lai","CHINA JS SZ CS"};
		struct infor *p;
		p= &a;

printf("Id_card:%ld\n",p->Id_card);
printf("sex:%c\n",a.sex);
printf("name:%s\n",a.name);
printf("adreess:%s\n",a.adress);
printf("sex:%c\n",(*p).sex);
printf("sex:%c\n",p->sex);
printf("%ld\n",p);
return 0;	
}