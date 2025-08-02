#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>


//int main()
//{
//	printf("%C\n", '\'');
//	printf("%c\n", '\"');
//	printf("\a\a\a\a\a");
//	printf("%C\n", '\130');
//	printf("%C\n",'\x60');
//	printf("%zu\n", strlen("c:\test\628\test.c"));
//	
//	return 0;
//}
////
//int main()
//{
//	int input = 0;
//	printf("enter bite\n");
//	printf("yao learn (1/0)?\n");
//	scanf("%d",&input);
//	if (input == 1)
//	{
//		printf("get offfer \n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("enter bite\n");
//	while (line < 20000)
//	{
//		printf("learn day:%d\n",line );
//		line++;}
//	if (line >= 20000)
//	{
//		printf("get good offer\n");
//
//	}
//	else
//	{
//		printf("contine to do your best\n");
//	}
//	return 0;
//	
//
//}
/*int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 2 == 1)
        {
            printf(" %d\n", i);

        }
        i++;



    }


    return 0;
}*/
//这个i++要放在if外面，否则会导致死循环；例如输入1，会加成2，但是2是偶数，所以不会输出，就不会加1，就一直是2，在里面死循环；
//int z(void); // 函数声明
//void miao(int n);
//
//int z(void)
//{
//    int time;
//    do {
//        printf("what's you want time:");
//        scanf("%d", &time);
//    } while (time < 1);
//    return time;
//}
//
//void miao(int n)
//{
//   
//    for (int i = 0; i < n; i++)
//    {
//        printf("miao\n");
//    }
//}
//
//int main(void)
//{
//    int time = z();
//    miao(time);
//    return 0;
//}
//int z(void)
//{
//    int time;
//    do
//    {
//        printf("what's your want times?（你想让你的猫叫几次）     ");
//        scanf("%d",&time);
//
//    } while (time< 1);
//    return time;
//
//}
//void miao(int n)
//{ 
//    for (int i = 0; i < n; i++)
//    {
//        printf("喵\n");
//    }
//}
//int main()
//{
//    int time = z();
//    miao(time);
//    return 0;
//}
//int y();

//int y()
//{
//    int m;
//    
//    
//        printf("你将使得下面的数字翻倍");
//        scanf("%d", &m);
//    
//    return m;
//}
int main()
{
    int i = 1;
    int dollar = 1;
    char c;
    
    while (i == 1)
    {
        printf("当前金额: %d\n", dollar);
        printf("是否翻倍? (y/n): ");
        scanf(" %c", &c);
        
        if (c == 'y' || c == 'Y')
        {
            dollar *= 2;
        }
        else if (c == 'n' || c == 'N')
        {
            printf("最终金额: %d\n", dollar);
            break;
        }
    }
    
    return 0;
}