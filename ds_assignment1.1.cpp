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
#include <typeinfo>
#include "array.h"
#include "array.cpp"


using std::cout; using std::endl; using std::string; using std::ifstream;
using std::getline;
/*
  Precondition: There must be a file named Assignment 1_Test Data_For Linux Users.txt
                in the folder of this program for it to be able to work
  Postcondition: Get the number of lines in the file and put the information from the 
                file into an array that is parsed line by line.
*/
CityInfo* openFile(CityInfo * cityInfo)
{
  int arraySize=0;
  string line, tempLat,tempLong;
  ifstream demoText;
  string templine;
  size_t beginning, end, length;


  demoText.open ("Assignment1.txt", std::ifstream::in);

  if(!demoText)
  {
    std::cout << "error accessing demo test"<< std::endl;
    system("pause");
    exit(-1);
  }


  //put info from file into array
  //CityInfo cityInfo[arraySize];
  int counter=0;

  getline ( demoText, templine);
  getline ( demoText, templine);

  while (!demoText.eof())
  {
    getline (demoText,templine);
    
    if (!templine.empty())
    {
      //finds the city name
      beginning = templine.find(':');
      cityInfo[counter].cityName= templine.substr(0,beginning);
      cout << cityInfo[counter].cityName << " name\n";
      
      //finds the latitude
      beginning = cityInfo[counter].cityName.length() + 2;
      end= templine.find(',');
      length= end-beginning; 
      tempLat = templine.substr(beginning,length);
      cout << tempLat << " left\n";

      //finds the longitude
      beginning = templine.find(',');
      tempLong= templine.substr(beginning + 2);
      cout << tempLong << " right\n";

      cityInfo[counter].latitude= stod (tempLat);

      cityInfo[counter].longitude= stod (tempLong);

    ++counter;


    }
  }/*

  for (int i=0; i < arraySize; i++)
  {
    std::cout << cityInfo[i].cityName << "cityName ";
    std::cout << cityInfo[i].latitude << "citylat ";
    std::cout << cityInfo[i].longitude << "long ";
    std::cout << "\n\n\n";
  }
  return arraySize;*/ 
  demoText.close();
  return cityInfo;

}

int main()
{
  cout << "Hello, time to inter some city's!!\n";
  int arraySize=60;
  CityInfo cityInformation [arraySize]; 
  
  cityInformation= openFile(cityInformation);
  
  return 0;
}

