#include <iostream>

void print(int n)
{
	if(n==0)
		return;
	print(n-1);
	std::cout << "Mazhar" << std::endl;
}

int main()
{
	int n;
	std::cout << "Second CPP" << std::endl;
	std::cout << "Enter n" << std::endl;
	std::cin >> n;
	print(n);
	return 0;
}
