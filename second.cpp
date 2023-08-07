#include <iostream>

int main()
{
	long long a,b,c;
	a = -1;
	b = 1;
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	for(int i=0; i<n; i++)
	{	
		c = a+b;
		a = b;
		b = c;
		std::cout << c << " ";

	}
	std::cout << std::endl;

}
