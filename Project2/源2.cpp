#include<stdio.h>
int main()
{
    int x, y, z;
    char c;
    printf("��ʽΪ���������������\n");
    printf("�����룺");
    scanf_s("%d%c%d", &x, &c, 1, &y);
    switch (c)
    {
    case '+':
        z = x + y;
        break;
    case '-':
        z = x - y;
        break;
    case '*':
        z = x * y;
        break;
    case '/':
        z = x / y;
        break;
    default:
        printf("erro!");
        break;
    }
    printf("%d", z);
    return 0;
}