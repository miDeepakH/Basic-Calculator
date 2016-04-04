#include <iostream>
int main()
{
	int a, b, addres, subres, mulres, divres;
	std::cout << "Enter two numbers\n" << std::endl;
	std::cin >> a >> b;
	addres = a + b;
	subres = a - b;
	mulres = a * b;
	divres = a / b;
	std::cout << "Addition = " << addres << std::endl;
	std::cout << "Subtraction = " << subres << std::endl;
	std::cout << "Multiplucation = " << mulres << std::endl;
	std::cout << "Division = " << divres << std::endl;
	return 0;
}