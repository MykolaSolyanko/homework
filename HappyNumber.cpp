#include <iostream>
constexpr int8_t countOfNums_ticket{ 6 };
bool isHappy(const int32_t& num)//��������� �� ������������� r-value ������ �����
{
	int32_t first{ num/ 1000 }, second{ num % 1000 }; // ���������� � ���������� ������ � ������ �������� �����(��������� �� �������� ������ ���� 6-������� �����, ����� �� ������
	// � ������������ �� 1000
	int32_t sum1{}, sum2{};// ����� ������ � ������ �������� �����, ���������� ����� 0

	for (size_t i = 0; i < 3; i++) //  ��������� ������� 2 3--������� �����, ���� �� 3 ��������
	{
		sum1 += (first % 10); first /= 10; // ����������� �������� sum1 �� ������� �� ������� first �� 10,����� ������ ������������ ������� first �� 10
		sum2 += (second % 10); second /= 10;//���������� ������� ����
	}
	return sum1 == sum2;// ���������� ��������� ���������
}
int main()
{
	int32_t number{}, countOfNums{};//  ���������� �����, ���������� ����
	std::cout << "Enter number: "; std::cin >> number;// ��������� ������ �� ������������
	int32_t buff(number);// ������ ����� �����, ��������� ������������� 
	while (buff)// ���� ��� ����� ����������(�� ����� 0)
	{
		countOfNums++;// ����������� countOfNums �� 1
		buff /= 10; // ���� ����� ��������� ������������� �������� �� 10
	}
	if (countOfNums == countOfNums_ticket) // ���� ���-�� ����� ����� 6
	{
		isHappy(number) ? std::cout << "Happy\n" : std::cout << "Unhappy\n";// ��������� �����
	}
	else {//�����..
		std::cout << "Incorrect input!\n";// ������� ��������� �� ������
	}
	system("pause");
}