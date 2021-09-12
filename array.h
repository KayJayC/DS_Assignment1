#ifndef ARRAY_H
#define ARRAY_H

//struct template of the city information
struct CityInfo
{
  std::string cityName;
  double latitude, longitude;
};
CityInfo *searchName ( CityInfo *cityInformation, int ArraySize );
CityInfo *searchCoordinates ( CityInfo *cityInformation, int ArraySize );
CityInfo *deleteName ( CityInfo *cityInformation, int ArraySize );
CityInfo *deleteCoordinates ( CityInfo *cityInformation, int ArraySize );
CityInfo *distance ( CityInfo *cityInformation, int ArraySize );
void display ( CityInfo *cityInformation, int ArraySize );
void insertRecord ( CityInfo *cityInformation, int ArraySize );





#endif