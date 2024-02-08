// Кодировка Восточноевропейская -> Кирилица(WINDOWS-1251)

#include <stdio.h>
#include <locale.h> //библиотека функций локализации


int main() {
	setlocale(LC_ALL, "Rus"); //устанавливаем русскую	
	
    printf("Введите два целых числа через пробел:\n");
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    int diff = a - b;
    
    printf("%d\n", diff);
    
    return 0;
}
