#include <iostream>
#include<string>
using namespace std;

int main()
{
	string a = "apple", b = "banana";

	/*cout << (a == b) << '\n';
	cout << (a != b) << '\n';
	cout << (a < b) << '\n';
	cout << (a > b) << '\n';*/
	cout << a.size(); 
	a.pop_back();
	cout << a;
}
