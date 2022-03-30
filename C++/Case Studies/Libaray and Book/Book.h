#include<iostream>
using namespace std;

class Book
{
    int id;
    char title[20];
    char author[20];
    char publisher[20];
    int edition;
    double price; 
    int noOfPages;
    public:
    Book(int =1001 ,const char * ="C++", const char * = "Scott Meyers", const char * ="Packt",int =3, double=560, int=300);
    Book(int =1001 ,const char * ="C++", const char * = "Scott Meyers", double=560, int=300);
    void accept();
    void display();
    int getId();
    char * getTitle();
    char * getAuthor();
    char * getPublisher();
    int getEdition();
    double getPrice();
    int getNoOfPages();
    void setId(int);
    void setTitle(const char *);
    void setAuthor(const char *);
    void setPublisher(const char *);
    void setEdition(int);
    void setPrice(double);
    void setNoOfPages(int);
    bool operator<(Book &);
    bool operator!=(Book &);
    friend ostream operator<<(ostream &, Book &);
};