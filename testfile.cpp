#include <iostream>
#include <fstream>
#include <string>

using std::cout; using std::endl; using std::string;

int main()
{
	int ARRAYSIZE=7;
	int counter=0;

	struct RandomData
	{
		std::string name;
		double left, right;
	};
	//creates the array of structs
	RandomData randomData[ARRAYSIZE];

	std::ifstream test;

	test.open("Assignment1.txt", std::ifstream::in);

	if (!test)
	{
		std::cout << "error accessing text" << std::endl;
		exit(-1);
	}
/*
	while (!test.eof())
	{
		test >> randomData[counter].name
		>> randomData[counter].left 
		>> randomData[counter].right;
		++counter;
	}

	cout << "hello";

	for (int i=0; i < ARRAYSIZE; i++)
	{
		cout << randomData[counter].name << "name\n";
		cout << randomData[counter].left << "left\n";
		cout << randomData[counter].right << "right\n";
	}*/

	char c = test.get();

	while(test.good())
	{
		cout << c;
		c = test.get();
	}

	test.close();
}