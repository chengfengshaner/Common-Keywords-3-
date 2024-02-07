//关键字 typedef - 类型定义
//类型重定义/类型重命名
#include <stdio.h>

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;//这两条变量意义相同
//	return 0;
//}

//static - 静态的
//1.static修饰局部变量
//2.static修饰全局变量
//3.static修饰函数

//void test()
//{
//	int a = 1;
//	a++;            //a是局部变量，出范围时销毁
//	printf("%d", a);//2 2 2 2 2 2 2 2 2 2
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

void test()
{
	static int a = 1;
	a++;            //static使a没有销毁，作为新的a值使用
	printf("%d", a);//2 3 4 5 6 7 8 9 10 11
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}

