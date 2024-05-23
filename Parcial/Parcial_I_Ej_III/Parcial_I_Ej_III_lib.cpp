#include <string>
#include "Parcial_I_Ej_III_lib.h"

using namespace std;

string Editorial::getName1()
{
    return name1;
}
void Editorial::setName1(string _name1)
{
    name1=_name1;
}

int Author::getID()
{
    return ID;
}

void Author::setID(int _ID)
{
    ID=_ID;
}

string Author::getName2()
{
    return name2;
}
void Author::setName2(string _name2)
{
    name2=_name2;
}

string Book::getTile()
{
    return title;
}
void Book::setTitle(string _title)
{
    title=_title;
}

Author Book::getAuthor(){
    return autor;
}

void Book::setAuthor(Author _autor)
{
    autor=_autor;
}

string Book::toString(){
    string str= "Nombre de la Editorial: " + (name1) + 
    "\nTitulo del Libro: " + (title)+ 
    "\nDNI del Autor: " + to_string(autor.getID())+
    "\nNombre del Autor: " + (autor.getName2());

    return str;
}
