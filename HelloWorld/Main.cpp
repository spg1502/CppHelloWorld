#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello World!" << endl;
	string response;
	getline(cin, response);

	cout << response + ", was what you typed" << endl;
	cin.get();
}