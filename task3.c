// ��������� ������������������� -> ��������(WINDOWS-1251)

#include <stdio.h>
#include <locale.h> //���������� ������� �����������


int main() {
	setlocale(LC_ALL, "Rus"); //������������� �������	
	
    printf("������� ��� ����� ����� ����� ������:\n");
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    int diff = a - b;
    
    printf("%d\n", diff);
    
    return 0;
}
