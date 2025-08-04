
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

//such as ：int d = （c = a-2 ，a = b + c  ，c -3）；a=10,b=10,c=0---->d=5;

//[]是下标引用操作符，such as:arr[3]=20;则arr and 3就是其操作数，数组的下标是从0开始的；

//Add（a,b）则Add，2，3都是操作数；

//全局变量和局部变量相同时，是局部变量优先，全局变量就有外部链接属性，使用extern 则可以引用外部文件的变量

//数组的结尾暗含\0，但是用strlen时不会计算其长度

//const修饰的a本质上是变量，但是不能被修改本质上具有常量的属性

//用 ’‘引用字符，用“”引用字符串

/ * ---------------*/引用的一种方式

//int* p = null；是创建指针变量，*p是解除

<img width="1277" height="926" alt="屏幕截图 2025-07-27 121610" src="https://github.com/user-attachments/assets/987815f9-70e5-40fb-b628-89fd10899581" />

<img width="2089" height="842" alt="屏幕截图 2025-07-28 191946" src="https://github.com/user-attachments/assets/76d82a8d-934d-4bb6-bcba-452805785b3f" />

<img width="1290" height="909" alt="屏幕截图 2025-07-29 154836" src="https://github.com/user-attachments/assets/286057a2-e267-4a6e-928e-ed6534391cca" />

<img width="1265" height="616" alt="屏幕截图 2025-07-29 154947" src="https://github.com/user-attachments/assets/0af03977-99a4-4340-9808-55a1b25efa2d" />

<img width="1616" height="840" alt="屏幕截图 2025-07-29 162455" src="https://github.com/user-attachments/assets/7c72180a-e31f-47f5-9577-9483a7f70ad2" />

<img width="2540" height="1239" alt="屏幕截图 2025-07-29 162517" src="https://github.com/user-attachments/assets/50ceb99b-6a73-4922-b16b-2c3931998b50" />

<img width="2494" height="1454" alt="屏幕截图 2025-07-29 205629" src="https://github.com/user-attachments/assets/62dd5b25-fcaa-4026-8d74-78e3e01b8c03" />

<img width="2229" height="1212" alt="屏幕截图 2025-07-29 205914" src="https://github.com/user-attachments/assets/e84f0a73-2773-4e7d-be11-1dc32d1f2088" />

<img width="2523" height="1354" alt="屏幕截图 2025-07-29 211501" src="https://github.com/user-attachments/assets/95dbf89c-98a8-4e9f-a432-744cd22de918" />

<img width="2559" height="1527" alt="屏幕截图 2025-07-29 212326" src="https://github.com/user-attachments/assets/3ff04220-7780-45f1-ab84-321f3675a873" />

<img width="1896" height="1130" alt="屏幕截图 2025-07-29 213001" src="https://github.com/user-attachments/assets/73026f14-c761-449b-9f71-c953892ec996" />

<img width="1250" height="816" alt="屏幕截图 2025-07-29 214701" src="https://github.com/user-attachments/assets/0c781ee4-effe-4b75-a70e-7141ec135a14" />

<img width="1527" height="1043" alt="屏幕截图 2025-07-29 220016" src="https://github.com/user-attachments/assets/8d220af5-0c7f-4090-b8c7-9484afe99699" />

<img width="1965" height="1226" alt="屏幕截图 2025-07-29 220027" src="https://github.com/user-attachments/assets/71f226fd-ba73-430b-986a-da5d1604ccd2" />

<img width="1407" height="1164" alt="屏幕截图 2025-07-29 220156" src="https://github.com/user-attachments/assets/c33c2106-9b1f-44f9-9355-8b0bc00aa5fe" />

<img width="1902" height="934" alt="屏幕截图 2025-07-29 221028" src="https://github.com/user-attachments/assets/64b364df-9b8e-421f-b5dd-8d2427e09476" />

//可以使用for 形式表示循环会更加简单，

//可以使用函数，使过程更加的高级

//昨天学了swith的用法

<img width="961" height="688" alt="屏幕截图 2025-07-31 172321" src="https://github.com/user-attachments/assets/cbd84402-47ad-42ab-867e-a5b182bf7389" />

<img width="396" height="534" alt="屏幕截图 2025-07-31 172839" src="https://github.com/user-attachments/assets/795db559-e577-4e67-9170-8b283d80fcf1" />

<img width="1559" height="901" alt="屏幕截图 2025-08-02 121704" src="https://github.com/user-attachments/assets/7f770124-31e0-4551-afb4-55abbc366e0d" />

day 8 ;02;

<img width="1999" height="953" alt="屏幕截图 2025-08-02 124636" src="https://github.com/user-attachments/assets/9aaaed9c-c89d-44b3-bc96-147b64934144" />

<img width="2551" height="1256" alt="屏幕截图 2025-08-02 155656" src="https://github.com/user-attachments/assets/0be963ee-0c27-4379-b4e6-a52d329f8210" />

<img width="742" height="1014" alt="屏幕截图 2025-08-02 170140" src="https://github.com/user-attachments/assets/0bd53ca3-dc05-45d8-803e-5fc71fefaacb" />

<img width="807" height="1010" alt="屏幕截图 2025-08-02 170147" src="https://github.com/user-attachments/assets/7974b671-86d4-4237-83bb-dc901a5b702f" />

<img width="1837" height="1280" alt="屏幕截图 2025-08-02 170629" src="https://github.com/user-attachments/assets/4feef20c-8e3e-4dab-bb8c-d68d978e691b" />

day 8.4

学习的重点是在ASCII中，大小写之间相差32，可以利用此来进行大小写的转化，数组arrays还是挺难的，其中有几个错误，第二章图的return s应该改为return n;return0，通常是正常的，而return，非零的任意数字都可能是错误的，例如404，1123

<img width="2388" height="1009" alt="屏幕截图 2025-08-04 150652" src="https://github.com/user-attachments/assets/3c5e82d1-a6d4-41f3-a757-7afe1d36d523" />

<img width="2444" height="1303" alt="屏幕截图 2025-08-04 153250" src="https://github.com/user-attachments/assets/2bb5425d-daec-4bc9-969d-58333906825e" />

<img width="2350" height="1275" alt="屏幕截图 2025-08-04 154559" src="https://github.com/user-attachments/assets/bc156eac-e949-4835-ab9c-cb4ce975d80c" />

<img width="1102" height="182" alt="屏幕截图 2025-08-04 154811" src="https://github.com/user-attachments/assets/7a43b894-90c9-48a0-b1d2-49524d5ad548" />

<img width="1229" height="606" alt="屏幕截图 2025-08-04 155454" src="https://github.com/user-attachments/assets/9f6a9818-29f2-45bb-8adc-7924fa0a3030" />

<img width="1689" height="649" alt="屏幕截图 2025-08-04 161114" src="https://github.com/user-attachments/assets/05c8b999-ce2f-4327-ba19-357ca898b94e" />






















