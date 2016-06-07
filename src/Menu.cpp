/*
 * Menu.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{

}

void Menu::clearScreen()
{
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

void Menu::pause()
{
	#ifdef _WIN32
	system("pause");
	#else
	system("read -n1 -r -p \"Press any key to continue...\" key");
	#endif
}


bool Menu::validate(int option)
{
	if(option >= 1 && option <= 4)
	{
		return true;
	}else
	{
		cout << "Please pick an option between 1 and 4"<< endl;
		pause();
		return false;
	}
}

void Menu::routeAction(int option)
{

	switch(option)
	{
	case 1:
		listItems();
		break;
	case 2:
		addItems();
		break;
	case 3:
		removeItems();
		break;
	case 4:
		cout << "Thanks for using our software, good bye!" << endl;
	}
	pause();
}

void Menu::listItems()
{
	Element* element;
	while(Element != NULL)
	{

		cout <<endl << element->index <<"Product: " <<  element->_name <<"\t" <<"Quantity: " << element->quantity << endl;
		element = element->_next;

	}
	//TODO: Implement this
	//cout << "Implement  Menu::listItems" << endl;
}

void Menu::addItems()
{
	int option;
	Element* element;
	system("cls");

	cout <<" Add"<<endl << endl;
	cout <<"1 - Name of the Product: ";
	cin >> element->_name;
	cout <<endl<<"2 - Quantity: ";
	cin >> element->quantity;
	List::add(element->_name,element->quantity);

	cout <<endl<< "Product "<<element->_name <<" added"<<endl;
	Menu::routeAction(option);
	cout << endl;


	//TODO: Implement this
	//cout << "Implement  Menu::addItems" << endl;
}

void Menu::removeItems()
{
	int option;
	Element* element;
	int index;
	system("cls");
	cout << endl << " Delete Products "<< endl;
	Menu::listItems();
	cout <<endl<< "Choose the name of the product to delete => ";
	cin >> index;
	List::remove(index);
	cout <<endl<< "Product "<< index<<" Deleted"<<endl;
	Menu::routeAction(option);
	cout << endl;

	//TODO: Implement this
	//cout << "Implement  Menu::removeItems" << endl;
}

void Menu::show()
{
	int option;
	do
	{
		clearScreen();
		cout << "ITLA Shopping List" << endl;
		cout << "1- List items" << endl;
		cout << "2- Add Item" << endl;
		cout << "3- Remove Item" << endl;
		cout << "4- Exit" << endl;
		cout << "Select an option => ";
		cin >> option;
		if(validate(option))
		{
			routeAction(option);
		}
	}while(option !=4);
}
