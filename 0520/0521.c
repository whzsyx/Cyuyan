//�ṹ��
#include <stdio.h>
#include <string.h> 
/*
main()
{
	struct student
	{
		int num;
		char name[20];
		char sex;
		char add[30];
		
	}
	s1={19001,"����",'M',"���ϰ���"},
	s2={19002,"��ҹ",'W',"��������"}; 
	printf("ѧ�ţ�%d\n",s1.num);
	printf("������%s\n",s1.name);
	printf("�Ա�%c\n",s1.sex);
	printf("------------------\n");
	printf("סַ��%s\n",s1.add); 
	printf("ѧ�ţ�%d\n",s2.num);
	printf("������%s\n",s2.name);
	printf("�Ա�%c\n",s2.sex);
	printf("סַ��%s\n",s2.add);
}
*/
/*
struct student
{
		int num;
		char name[20];
		float score;
		
}s1,s2;
main()
{
	printf("����ѧ��1����Ϣ(ѧ�š��������ɼ�):\n");
	scanf("%d%s%f",&s1.num,&s1.name,&s1.score);
	
	printf("����ѧ��2����Ϣ(ѧ�š��������ɼ�):\n");
	scanf("%d%s%f",&s2.num,&s2.name,&s2.score);
	printf("��߳ɼ��ǣ�\n");
	if(s1.score > s2.score)
		printf("%d %s %.0f\n",s1.num,s1.name,s1.score);
	else if(s1.score<s2.score)
		printf("%d %s %.0f\n",s2.num,s2.name,s2.score);
		else 
		{
		printf("%d %s %.0f\n",s1.num,s1.name,s1.score);
		printf("%d %s %.0f\n",s2.num,s2.name,s2.score);
		}
}
*/
//3.
//����ṹ������
struct person
{
	char name[20];
	int count;
	
 } p[3]={{"zhao",0},{"qian",0},{"sun",0}};
main()
{
	int i,j;
	char pname[20];
	printf("������10����ѡ��������\n");
	for (i=10;i<10;i++)
		{
			scanf("%s",pname);
			for(j=0;j<3;j++)
			{
				if(strcmp(pname,p[j].name) ==0)
					p[j].count++;
			}
		}
		printf("ѡƱ���Ϊ��\n");
		for(i=0;i<3;i++)
		{
		
		printf("%5s: %d\n",p[i].name,p[i].count);
		}
}
