/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
        if(_first == NULL)
        {
            _first = element;
            _last = element;
        }else{
            _last ->_next = element;
            _last = element;
        }
	//TODO: Implement this method
	cout << "You should write the code for adding " << element -> _name << endl;

}

void List::remove(int index)
{
	  Element* aux, ant = NULL;
	  aux = element;

	   if(element != NULL)
	   {
		   while(aux != NULL)
		   {
			   if(aux->index == index)
			   {
				   if(aux==element)
					   aux = aux->_next;
            	   else
					   ant->_next = aux->_next;
 				   delete(aux);
             return;
			   }

			   ant = aux;
			   aux = aux->_next;
		   }

	   }else
		   cout << "Clean List" <<endl;
	//TODO: Implement this method
	//cout << "You should write the code for removing the index " << index << endl;
}
