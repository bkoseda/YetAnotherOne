//============================================================================
// Name        : HW.cpp
// Author      : B
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

static char STATIC_BUFFER[2048];


class PlaceKeeper
{
	int number;
	char text[255];
public:
	PlaceKeeper(int n, const char* t);
};


PlaceKeeper::PlaceKeeper(int n, const char* t)
{
	this->number = n;
	strcpy(this->text, t);
}


int main()
{
	PlaceKeeper* pk = new(STATIC_BUFFER)PlaceKeeper(12,"Dwanascie");
	//PlaceKeeper* pk = new PlaceKeeper(12,"Dwanascie");
	cout << "|" << static_cast<char*>(STATIC_BUFFER+sizeof(int)) << "|" << endl; // prints !!!Hello World!!!
	return 0;
}
