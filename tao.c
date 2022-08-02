#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////int main()
////{
////	printf("Concrete contains gravel and cement.\n");
////return 0;
////}
//
//int main()
//{
//	printf("A .c is used to end a c program filename.\n");
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	float weight;
//	float value;
//
//	printf("Are you worth your weight in platinu?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds:");
//	
//	scanf("%f", &weight);   /*scanf()函数用于读取键盘的输入。&weight告诉scanf()把输入的值赋给名为weight的变量。*/
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n",value );   /*%.2f中的.2用于精确控制输出，指定输出的浮点数只显示小数点后两位*/
//	printf("You are easily worth that!If platinum prices drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//
//}

    //在C语言中，用int关键字来表示基本的整数类型。（关键字long?short，unsigned和signed）用于提供基本整数类型的变式，例如unsigned short int和long long int。
//char关键字用于指定字母和其他字符（如，#、$、%和*）。另外，char类型也可以表示较小的整数。
//float、double和long double表示带小数点的数。
//_Bool类型表示布尔值（true或false），_Complex和_Imaginary分别表示复数和虚数。

//位、字节和字 是描述计算机数据单元或存储单元的术语。这里主要指存储单元。 
//位（bit） 是最小存储单元，可以储存0或1.
//字节（byte） 是常用的1计算机存储单位。1byte= 8bit
//字（word） 是设计计算机时给定的自然存储单位。

//3.16E7表示3.16?10?   C语言把不含小数点和指数的数作为整数。
//整数无小数部分，浮点数有小数部分；浮点数可表示范围大于整.

//声明int变量： Ⅰ.int erns;  
               //Ⅱ.int hogs,cows,goats;
//初始化变量： 为变量赋值。如int hogs=21；（int dogs，cats=94;这种只初始化了cats）21，94被称为 整形常数 或 整型字面量。
//简而言之，声明为变量创建和标记存储空间，并为其指定初始值。

#include <stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right:");
    printf("%d minus %d is %d\n", ten, 2, ten - two);

    return 0;
}