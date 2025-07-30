# hello-world
此存储库用于练习 GitHub 流



    int main()

     {


	int line = 0;
 
	printf("enter bite\n");
 
	while (line < 20000)
 
	{
 
		printf("learn day:%d\n",line );
  
		line++;}
  
	if (line >= 20000)
 
	{
 
		printf("get good offer\n");
  

	}
 
	else
 
	{
 
		printf("contine to do your best\n");
  
	}
 
	return 0;
 
	

       }



//学习如何使用while，函数

       int main()
       
      {
   
	int input = 0;
 
	printf("enter bite\n");
 
	printf("yao learn (1/0)?\n");
 
	scanf("%d",&input);
 
	if (input == 1)
 
	{
 
		printf("get offfer \n");
  
	}
 
	else
 
	{
 
		printf("卖红薯\n");
  
	}
 
	return 0;
 
     }
     
//学习使用if函数

     int main()

    {

	printf("%C\n", '\'');
 
	printf("%c\n", '\"');
 
	printf("\a\a\a\a\a");
 
	printf("%C\n", '\130');
 
	printf("%C\n",'\x60');
 
	printf("%zu\n", strlen("c:\test\628\test.c"));
 
	
	return 0;
 
    }
//对各种指示符的应用 

//\若让单独打出一个‘’，则需要在其之前加上这个\，同理

//如？？）->】，？？（->【防止此类事情发生则改为\?

//%d 打印整形 %c打印字符串 %s打印字符串 %f打印float类型 %Lf打印double类型 转义字符

//数据类型 char 字符数据类型，short 短整型 ， int 整型 ，long 长整型 ，longlong 更长的整型 ，float 单精度浮点数,double 双精度浮点数

//其所占的字节分别为1，2，4，4，8，4，8

//8bit=1byte 1024byte=1kb  1024kb=1mb 1024mb =1gb 1024gb=1tb 1024tb=1pb

//int a =(int)3.14，强制转换类型，3.14默认为double型

// == 是等于 ，= 是赋值

//&是取地址or并且（交集），||是逻辑上的或（并集）

//exp1?exp2:exp3是三目操作符，分为（真，√，×），和（假，×，√）两种类型；

//逗号表达式是逗号隔开的一系列表达式，逗号表达式的作用就是从左到右依次计算整个表达式的结果，输出的就是最后一个表达式的结果

//such as ：int d = （c = a-2 ，a = b + c  ，c -3）；a=10,b=10,c=0---->d=8;

//[]是下标引用操作符，such as:arr[3]=20;则arr and 3就是其操作数，数组的下标是从0开始的；

//Add（a,b）则Add，2，3都是操作数；

//全局变量和局部变量相同时，是局部变量优先，全局变量就有外部链接属性，使用extern 则可以引用外部文件的变量

//数组的结尾暗含\0，但是用strlen时不会计算其长度

//const修饰的a本质上是变量，但是不能被修改本质上具有常量的属性

//用 ’‘引用字符，用“”引用字符串

/ * ---------------*/引用的一种方式

//int* p = null；是创建指针变量，*p是解除








