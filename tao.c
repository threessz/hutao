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
//	scanf("%f", &weight);   /*scanf()�������ڶ�ȡ���̵����롣&weight����scanf()�������ֵ������Ϊweight�ı�����*/
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n",value );   /*%.2f�е�.2���ھ�ȷ���������ָ������ĸ�����ֻ��ʾС�������λ*/
//	printf("You are easily worth that!If platinum prices drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//
//}

    //��C�����У���int�ؼ�������ʾ�������������͡����ؼ���long?short��unsigned��signed�������ṩ�����������͵ı�ʽ������unsigned short int��long long int��
//char�ؼ�������ָ����ĸ�������ַ����磬#��$��%��*�������⣬char����Ҳ���Ա�ʾ��С��������
//float��double��long double��ʾ��С���������
//_Bool���ͱ�ʾ����ֵ��true��false����_Complex��_Imaginary�ֱ��ʾ������������

//λ���ֽں��� ��������������ݵ�Ԫ��洢��Ԫ�����������Ҫָ�洢��Ԫ�� 
//λ��bit�� ����С�洢��Ԫ�����Դ���0��1.
//�ֽڣ�byte�� �ǳ��õ�1������洢��λ��1byte= 8bit
//�֣�word�� ����Ƽ����ʱ��������Ȼ�洢��λ��

//3.16E7��ʾ3.16?10?   C���԰Ѳ���С�����ָ��������Ϊ������
//������С�����֣���������С�����֣��������ɱ�ʾ��Χ������.

//����int������ ��.int erns;  
               //��.int hogs,cows,goats;
//��ʼ�������� Ϊ������ֵ����int hogs=21����int dogs��cats=94;����ֻ��ʼ����cats��21��94����Ϊ ���γ��� �� ������������
//�����֮������Ϊ���������ͱ�Ǵ洢�ռ䣬��Ϊ��ָ����ʼֵ��

#include <stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right:");
    printf("%d minus %d is %d\n", ten, 2, ten - two);

    return 0;
}