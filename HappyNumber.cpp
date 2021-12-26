#include <iostream>
constexpr int8_t countOfNums_ticket{ 6 };
bool isHappy(const int32_t& num)//принимаем по неконстантной r-value ссылке число
{
	int32_t first{ num/ 1000 }, second{ num % 1000 }; // записываем в переменные первую и вторую половину числа(поскольку по условиям задачи надо 6-значное число, делим по модулю
	// и целочисленно на 1000
	int32_t sum1{}, sum2{};// сумма первой и второй половины числа, изначально равна 0

	for (size_t i = 0; i < 3; i++) //  поскольку остаётся 2 3--значных числа, цикл на 3 итерации
	{
		sum1 += (first % 10); first /= 10; // увеличиваем значение sum1 на остаток от деления first на 10,затем делаем присаивающее деление first на 10
		sum2 += (second % 10); second /= 10;//аналогично строчке выше
	}
	return sum1 == sum2;// возвращаем результат сравнения
}
int main()
{
	int32_t number{}, countOfNums{};//  переменные Число, количество цифр
	std::cout << "Enter number: "; std::cin >> number;// принимаем данные от пользователя
	int32_t buff(number);// создаём копию числа, введённого пользователем 
	while (buff)// пока это число существует(не равно 0)
	{
		countOfNums++;// увеличиваем countOfNums на 1
		buff /= 10; // само число уменьшаем присваивающим делением на 10
	}
	if (countOfNums == countOfNums_ticket) // если кол-во чисел равно 6
	{
		isHappy(number) ? std::cout << "Happy\n" : std::cout << "Unhappy\n";// проверяем число
	}
	else {//иначе..
		std::cout << "Incorrect input!\n";// выводим сообщение об ошибке
	}
	system("pause");
}