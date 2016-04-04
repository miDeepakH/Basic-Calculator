/*
* Author: Deepak
* Date: 04/04/2016
*/
#include <iostream>
using namespace std;

int main()
{
	int a, b, addres, subres, mulres, divres;
	cout << "Enter two numbers\n" << endl;
	cin >> a >> b;
	addres = a + b;
	subres = a - b;
	mulres = a * b;
	divres = a / b;
	cout << "Addition = " << addres << endl;
	cout << "Subtraction = " << subres << endl;
	cout << "Multiplucation = " << mulres << endl;
	cout << "Division = " << divres << endl;
	return 0;
}