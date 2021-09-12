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
#include "array.1.cpp"
//#include "linkedlist.h"
//#include "linkedlist.cpp"


using std::cout; using std::endl; using std::string; using std::ifstream;
using std::getline; using std::cin;
bool menu  (CityInfo *cityInformation, int);

int main()
{
  cout << "Hello, time to inter some city's!!\n";
  int arraySize=60;
  string line, tempLat,tempLong;
  ifstream demoText;
  string templine;
  size_t beginning, end, length;
  bool looper = false;
  CityInfo cityInfo[arraySize];
  int counter=0;


  demoText.open ("Assignment1.txt", std::ifstream::in);

  if(!demoText)
  {
    std::cout << "error accessing demo test"<< std::endl;
    system("pause");
    exit(-1);
  }

  //readin data to array
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
      cout << cityInfo[counter].cityName << " name ";
      
      //finds the latitude
      beginning = cityInfo[counter].cityName.length() + 2;
      end= templine.find(',');
      length= end-beginning; 
      tempLat = templine.substr(beginning,length);
      cout << tempLat << " left ";

      //finds the longitude
      beginning = templine.find(',');
      tempLong= templine.substr(beginning + 2);
      cout << tempLong << " right\n";

      cityInfo[counter].latitude= stod (tempLat);

      cityInfo[counter].longitude= stod (tempLong);



    ++counter;
    arraySize= counter;


    }
  }
  while (looper ==false)
  {
    menu (cityInfo,arraySize);
  }

  demoText.close();
  return 0;
}
bool menu  (CityInfo *cityInformation, int ArraySize)
{
  char choiceLet;
  int choiceNum; 

  cout << "******************************************************************************\n";
  cout << "Implementation Options\n";
  cout << "A. Use an array-based list implementation\n";
  cout << "B. Use an lined-list implementation\n\n";
  cout << "Operation Options: \n";
  cout << "1. Insert a record \n";
  cout << "2. Search for a record by name \n";
  cout << "3. Search for a record by coordinate\n";
  cout << "4. Delete a record by name \n";
  cout << "5. Delete a record by coordinate \n";
  cout << "6. Print records within a given distance of a specified location \n";
  cout << "7. Print all records \n";
  cout << "8. Exit \n";
  cout << "******************************************************************************\n";

  while ((choiceLet != 'A') && (choiceLet != 'a') && (choiceLet != 'B') && (choiceLet != 'b') )
  {
    cout << "\nEnter your implementation option(A or B) :";
    cin >> choiceLet;
  } 

  do
  {
    cout << "\nEnter your choiceNum(1-9) :";
    cin >> choiceNum;
  } while (choiceNum > 9);

  cout << "\nThe choice you enterd is " << choiceNum;

  if (choiceNum == 1)
  {
    ++ArraySize;
    cout<< "the Array size is"<< ArraySize;
    
    switch (choiceNum)
    {
      case 1:
      insertRecord (cityInformation, ArraySize);
      return false;

      case 2: 
      searchName (cityInformation, ArraySize);
      return false;

      case 3:
      searchCoordinates (cityInformation, ArraySize);
      return false;

      case 4:
      deleteName (cityInformation, ArraySize);
      return false;

      case 5:
      deleteCoordinates (cityInformation, ArraySize);
      return false;

      case 6:
      distance (cityInformation, ArraySize);
      return false;

      case 7:
      display (cityInformation,ArraySize);
      return false;

      case 8:
      cout << "I guess youre done, ending program now\n";
      return true;
    }
  }
  else
  {
    switch (choiceNum)
    {
      case 1:
      insertRecord (cityInformation, ArraySize);
      return false;

      case 2: 
      searchName (cityInformation, ArraySize);
      return false;

      case 3:
      searchCoordinates (cityInformation, ArraySize);
      return false;

      case 4:
      deleteName (cityInformation, ArraySize);
      return false;

      case 5:
      deleteCoordinates (cityInformation, ArraySize);
      return false;

      case 6:
      distance (cityInformation, ArraySize);
      return false;

      case 7:
      display (cityInformation,ArraySize++);
      return false;

      case 8:
      cout << "I guess youre done, ending program now\n";
      return true;
    }
  }
}

