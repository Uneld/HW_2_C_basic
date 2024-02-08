// Кодировка Восточноевропейская -> Кирилица(WINDOWS-1251)

#include <stdio.h>
#include <locale.h> //библиотека функций локализации


int main() {
	setlocale(LC_ALL, "Rus"); //устанавливаем русскую	
	
    printf("Введите четырехзначное целое положительное число: ");
    
    int num;
	scanf("%d", &num);
	
	int 
		part1 = num / 1000, 
		part2 = (num / 100) % 10, 
		part3 = (num / 10) % 10, 
		part4 = num % 10;
	printf("Полученные цифры: %d %d %d %d\n", part1, part2, part3, part4);
	
	int sum = part1 + part2 + part3 + part4;
	printf("сумма цифр: %d\n\n", sum);
	
	int divider = 0;
	
	if (part1 > 0)
		divider++;
	if (part2 > 0)
		divider++;
	if (part3 > 0)
		divider++;
	if (part4 > 0)
		divider++;
	
	float average = 0.00;
	
	if (divider > 0){
		average = (float)sum / divider;
	} 
	printf("Среднее арифметическое цифр: %.2f\n", average);
    
    return 0;
}
