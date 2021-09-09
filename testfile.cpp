#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream test;

	test.open("testfile.txt", std::ifstream::in);

	char c = test.get();

	while(test.good())
	{
		cout << c;
		c = test.get();
	}

	test.close();
}