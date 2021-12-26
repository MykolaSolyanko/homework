#include <iostream>
 
int32_t sum_uneven_el(int32_t num)
{
	int32_t buff{ abs(num) }, dest{};

	while (buff)
	{
		if (((buff % 10) % 2) == 0)
		{
			dest += (buff % 10);
			buff /= 10;
		}
		else {
			buff /= 10;
		}
	}
	return dest;
}
int main()
{
	int32_t num{};
	std::cout << "Enter number: ";
	std::cin >> num;
	std::cout <<'\n'<< sum_uneven_el(num)<<'\n';
	system("pause");
}