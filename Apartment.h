#pragma once
#include <iostream>
#include <string>
#include <fstream>

struct Address
{
	std::string street;
	int house;
	int apartment;
};

struct Square
{
	double generalSquare;
	double livingSquare;
};

struct Apartment
{
private:
	int numOfRooms, floor;
	Square square;
	int numOfResidents;
	Address address;
public:
	Apartment() {};
	Apartment(std::ifstream& file);
	void print();
	void print1();
	std::string getStreet();
	int getHouse();
	int getApartment();
	int getRooms();
	int compare(const Apartment& objApartment);
};
