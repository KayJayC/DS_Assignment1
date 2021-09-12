#include <string>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <typeinfo>
//#include "ds_assignment1.cpp"
#include "array.h"
#include <iostream>

using std::cin;using std::cout; using std::string;
using std::getline;

//check if number or string
bool validateStringInput(string str)
{
   //create array of string legnth
   int size= str.length();
   int i = 0;

   while (i < size )
   { 
        if (!isalpha(str[i]) && !isspace(str[i]))
          return false;
        ++i;
   }
   return true;
}

bool validateNumericInput(string str)
{
   int size= str.length();
   int i = 0;

   while (i < size)
   {
         if (!isdigit(str[i]) && (str[i] != '.') && (str[i] != '-'))
         return false;
         ++i;
   }
   return true;
}

void printFunction (CityInfo *cityInformation, int counter)
{
    std::cout << cityInformation[counter].cityName << " city Name ";
    std::cout << cityInformation[counter].latitude << " latitude ";
    std::cout << cityInformation[counter].longitude << " longitude ";
    std::cout << "\n";
} 
void display ( CityInfo *cityInformation, int ArraySize )
{
     for( int i = 0; i < ArraySize; ++i)
     { 
          printFunction(cityInformation,i);
     }
}

void insertRecord ( CityInfo *cityInformation, int ArraySize )
{
     //ArraySize++;
     std::string name, lat, lon;
     double latit,longi;
     bool valInputs;

     cout <<" Please enter city name: ";
     getline (cin, name );
     valInputs = validateStringInput(name);
     if (valInputs == false)
     {
          cout <<"\nPlease re-enter a name that is all letters and no numbers";
          insertRecord (cityInformation, ArraySize);
     }
     else 
          cityInformation[ArraySize].cityName=name;

     cout <<" Please enter city latitude: ";
     getline (cin, lat );
     valInputs = validateNumericInput(lat);
          if (valInputs == false)
     {
          cout <<"\nPlease re-enter a name that is all numbers and no letters";
          insertRecord (cityInformation, ArraySize);
     }
     else
     {
          latit = stod(lat);
          cityInformation[ArraySize].latitude=latit;
     }

     cout <<" Please enter city longitude: ";
     getline (cin, lon );
     valInputs = validateNumericInput(lat);
          if (valInputs == false)
     {
          cout <<"\nPlease re-enter a name that is all numbers and no letters";
          insertRecord (cityInformation, ArraySize);
     }
     else 
     {
          longi = stod(lon);
          cityInformation[ArraySize].longitude=longi;
     }


}


CityInfo *searchName ( CityInfo *cityInformation, int ArraySize )
{
     std::string name;
     bool valInputs;
     cout << "Enter City Name :";
     getline (cin, name);

     valInputs = validateStringInput (name);
     if (valInputs == false)
     {    
          cout << "\nPlease re-enter a name that is all letters and no numbers\n";
          searchName (cityInformation, ArraySize);
     }
     else
     {
          for (int i =0; i < ArraySize; ++i)
          {
               if(cityInformation[i].cityName.compare(name)==0)
               //if(cityInformation[i].cityName == name)
               {
                    printFunction(cityInformation, i);
               }
               /*else
               {
                    cout << "Sorry we couldnt find a city by that name\n"
               }*/
          }
     }
}

CityInfo *searchCoordinates ( CityInfo *cityInformation, int ArraySize )
{
     string lat, longi;
     double latit, longit;
     bool valInputs;

     cout << "You must enter both latitude and longitude!!\n";
     cout << "Enter latitude :";
     getline (cin, lat);
     //cout << "Enter longitude :";
     //getline (cin, longi);

     valInputs = validateNumericInput (lat);
     if (valInputs == true)
     {
          cout << "Enter longitude :";
          getline (cin, longi);

          valInputs = validateNumericInput (longi);
          if (valInputs == true)
          {
               //change strings to doubles
              latit = std::stod (lat);
              longit = std::stod (longi);

              //find the coords in the array and put the one you are searching for
               for (int i =0; i < ArraySize; ++i)
               {
                    if((cityInformation[i].latitude == (latit))
                         && (cityInformation[i].longitude== (longit)))
                    {
                         printFunction(cityInformation, i);
                    }
                    /*else
                    {
                         cout << "Sorry we couldnt find a city by that name\n"
                    }*/
               }
          
          }
          
          else      
          {
          cout << "\nPlease re-enter a longitude that is all numbers and no letters\n";
          searchCoordinates (cityInformation, ArraySize);
          }
     }
     else      
     {
          cout << "\nPlease re-enter a latitude that is all numbers and no letters\n";
          searchCoordinates (cityInformation, ArraySize);
     }
}

CityInfo *deleteName ( CityInfo *cityInformation, int ArraySize )
{
     std::string name;
     int found =0;
     bool valInputs;

     cout << "Enter City Name to be deleted :";
     cin >> name;
     
     valInputs = validateStringInput (name);
     if (valInputs == false)
     {    
          cout << "\nPlease re-enter a name that is all letters and no numbers\n";
          deleteName (cityInformation, ArraySize);
     }
     else
     {
          for (int i =0; i < ArraySize; ++i)
          {
               if(cityInformation[i].cityName.compare(name)==0)
               {
                    cout << " You will be deleting: ";
                    printFunction (cityInformation, i);
                    
                    for(int j=i; j<(ArraySize-1); j++)
                         cityInformation[j] = cityInformation [j+1];
                    found=1;
                    i--;
                    ArraySize--;

               }
               /*else 
                    cout << "Give it another try, something wasnt right.";
                    *searchName (cityInformation , ArraySize);*/
          }
          for (int i=0; i < ArraySize; i++)
         {
         std::cout << cityInformation[i].cityName << " cityName ";
         std::cout << cityInformation[i].latitude << " citylat ";
         std::cout << cityInformation[i].longitude << " long ";
         std::cout << "\n\n\n";
         }
     }
}

//check doesnt work
CityInfo *deleteCoordinates ( CityInfo *cityInformation, int ArraySize )
{
     double lat, longi, found =0;
     cout << "Enter latitude : to be deleted ";
     cout << "You must enter both latitude and longitude!!";
     cin >> lat;
     cout << "Enter longitude : to be deleted ";
     cin >> longi;
     for (int i =0; i < ArraySize; ++i)
     {
          if((cityInformation[i].latitude == (lat))
               && (cityInformation[i].longitude== (longi)))
          {
               cout << " You will be deleting: ";
               printFunction (cityInformation, i);
               
               for(int j=i; j<(ArraySize-1); j++)
                    cityInformation[j] = cityInformation [j+1];
               found=1;
               i--;
               ArraySize--;
          }
          /*else 
               cout << "Give it another try, something wasnt right.";
               *searchCoordinates (cityInformation , ArraySize);*/
     }
     for (int i=0; i < ArraySize; i++)
    {
    std::cout << cityInformation[i].cityName << " cityName ";
    std::cout << cityInformation[i].latitude << " citylat ";
    std::cout << cityInformation[i].longitude << " long ";
    std::cout << "\n\n\n";
    }
}

//converts latitude or longitude decimal to radians
long double decToRadians (long double degree)
{
     long double mPi= 3.1415926535;
     return degree *(mPi/180.0);
}

CityInfo *distance ( CityInfo *cityInformation, int ArraySize )
{
     string name;
     long double lat1, long1, lat2,long2;
     int distance;
     double distanceCalculation;
     cout << "Enter the city name that you want to measure surronding";
     cin >> name;
     for (int i =0; i < ArraySize; ++i)
     {
          if(cityInformation[i].cityName.compare(name)==0)
          {
               lat1 = decToRadians (cityInformation[i].latitude);
               long1 = decToRadians (cityInformation[i].longitude);

          }


     
}


