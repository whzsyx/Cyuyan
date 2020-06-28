//结构体
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
	s1={19001,"天雷",'M',"河南安阳"},
	s2={19002,"殇夜",'W',"河南信阳"}; 
	printf("学号：%d\n",s1.num);
	printf("姓名：%s\n",s1.name);
	printf("性别：%c\n",s1.sex);
	printf("------------------\n");
	printf("住址：%s\n",s1.add); 
	printf("学号：%d\n",s2.num);
	printf("姓名：%s\n",s2.name);
	printf("性别：%c\n",s2.sex);
	printf("住址：%s\n",s2.add);
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
	printf("输入学生1的信息(学号、姓名、成绩):\n");
	scanf("%d%s%f",&s1.num,&s1.name,&s1.score);
	
	printf("输入学生2的信息(学号、姓名、成绩):\n");
	scanf("%d%s%f",&s2.num,&s2.name,&s2.score);
	printf("最高成绩是：\n");
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
//定义结构体数组
struct person
{
	char name[20];
	int count;
	
 } p[3]={{"zhao",0},{"qian",0},{"sun",0}};
main()
{
	int i,j;
	char pname[20];
	printf("请输入10个候选人姓名：\n");
	for (i=10;i<10;i++)
		{
			scanf("%s",pname);
			for(j=0;j<3;j++)
			{
				if(strcmp(pname,p[j].name) ==0)
					p[j].count++;
			}
		}
		printf("选票结果为：\n");
		for(i=0;i<3;i++)
		{
		
		printf("%5s: %d\n",p[i].name,p[i].count);
		}
}
