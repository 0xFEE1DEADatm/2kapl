#include "Header.h"
#include <Windows.h>

void task(DLIST& DL)
{
	ptrNODE ptr = DL.get_begin();
	std::string targetStreet;

	std::cout << "Enter street: \n";
	std::cin >> targetStreet;

	while (ptr)
	{
		if (ptr->info.getStreet() == targetStreet && ptr->info.getRooms() > 3)
		{
			std::cout << ptr->info.getHouse() << ' ' << ptr->info.getApartment();
			DL.True(ptr);
		}
		else
			ptr = ptr->next;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream file("input.txt");
	Apartment a;
	if (file)
	{
		DLIST DL("input.txt");
		DL.print();
		task(DL);
	}
	else
		std::cout << "Ошибка";

	std::cin.get();
}
__________
