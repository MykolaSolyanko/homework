#include <iostream>
 
int max_Div(int num)
{
	int buff(num);
	for (int i{num-1};i>0;i--)
	{
		if (buff % i == 0)return i;
	}
}
int main()
{
	int n{};
	std::cout << "Enter num: "; std::cin >> n;
	std::cout <<"max div: "<< max_Div(n);
}