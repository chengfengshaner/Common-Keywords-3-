//�ؼ��� typedef - ���Ͷ���
//�����ض���/����������
#include <stdio.h>

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;//����������������ͬ
//	return 0;
//}

//static - ��̬��
//1.static���ξֲ�����
//2.static����ȫ�ֱ���
//3.static���κ���

//void test()
//{
//	int a = 1;
//	a++;            //a�Ǿֲ�����������Χʱ����
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
	a++;            //staticʹaû�����٣���Ϊ�µ�aֵʹ��
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

