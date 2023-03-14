#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, f=0;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	cout << "Enter C: ";
	cin >> c;
	cout << "Enter D: ";
	cin >> d;
	if (a % 2 != 0)f++;
	if (b % 2 != 0)f++;
	if (c % 2 != 0)f++;
	if (d % 2 != 0)f++;
	if (f >= 2)cout << "true";
	else cout << "false";

}