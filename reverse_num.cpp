#include <iostream>
 
int32_t reverse(int32_t num)
{
	int32_t buff(num), dest{};

	while (buff)
	{
		dest *= 10;
		dest += (buff % 10);
		buff /= 10;
	}
	return dest;
}
int main()
{
	int32_t num{};
	std::cout << "Enter number: ";
	std::cin >> num;
	std::cout <<'\n'<< reverse(num)<<'\n';
	system("pause");
}