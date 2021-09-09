/*
  Author: Kayla Carter
  Class: Data structures
  Date: Sept 6 2021
  Summary:Implement a city database using array and linked list.
            Each database contains the name of the cityexpresed as
            real numbers x and y cordinates
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

//struct template of the city information
struct CityInfo
{
  std::string cityName;
  double latitude, longitude;
};
/*
  Precondition: There must be a file named Assignment 1_Test Data_For Linux Users.txt
                in the folder of this program for it to be able to work
  Postcondition: Get the number of lines in the file and put the information from the 
                file into an array that is parsed line by line.
*/
int openFile()
{
  int arraySize=0;
  std::string line;
  std::ifstream demoText("/Users/kayjay/Desktop/data_structures/assignment/Assignment1.txt");

  //counts the number of lines in the file and assigns this info to array size
  while (std::getline(demoText, line))
    ++arraySize;
  
  if(!demoText)
  {
    std::cout << "error accessing demo test"<< std::endl;
    system("pause");
    exit(-1);
  }


  //put info from file into array
  CityInfo cityInfo[arraySize];
  int counter=0;


  while (!demoText.eof() && counter < arraySize)
  {
    demoText >> cityInfo[counter].cityName >> cityInfo[counter].latitude
    >> cityInfo[counter].longitude ;
    ++counter;
  }

  for (int i=0; i < arraySize; i++)
  {
    std::cout << cityInfo[i].cityName << "cityName ";
    std::cout << cityInfo[i].latitude << "citylat ";
    std::cout << cityInfo[i].longitude << "long ";
    std::cout << "\n\n\n";
  }

  return arraySize;

}

int main()
{
  std::cout << "Hello World!\n";
  std::cout << openFile();
  return 0;
}

