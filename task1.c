// ��������� ������������������� -> ��������(WINDOWS-1251)

#include <stdio.h>
#include <locale.h> //���������� ������� �����������


int main() {
	setlocale(LC_ALL, "Rus"); //������������� �������	
	
    printf("������� ��� ����� ����� ����� ������:\n");
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int sum = a + b + c;
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    
    return 0;
}
