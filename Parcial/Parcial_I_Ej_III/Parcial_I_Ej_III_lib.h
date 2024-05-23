#include <string>

using namespace std;

class Editorial
{
    protected:
        string name1;
    public: 
        Editorial(){};
        Editorial(string _name1): name1(_name1){};

        string getName1();
        void setName1(string _name1);
};

class Author {
    private: 
        int ID;
        string name2;
    public: 
        Author(){};
        Author(int _ID, string _name2): ID(_ID), name2(_name2){};

        int getID();
        void setID(int _ID);

        string getName2();
        void setName2(string _name2);
};

class Book : public Editorial {
    protected:
        string title;
        Author autor;
    public: 
        Book(){};
        Book(string _name1, Author _autor, string _title): Editorial(_name1), autor(_autor), title(_title){};

        Author getAuthor();
        void setAuthor(Author _autor);

        string getTile();
        void setTitle(string _title);

        string toString();
};


