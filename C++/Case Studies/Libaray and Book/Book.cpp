#include <iostream>
#include<cstring>
#include "Book.h"
using namespace std;

Book::Book(int i, const char *t, const char *a, const char *p, int e, double pr, int n)
{
    id = i;
    strcpy(title,t);
    strcpy(publisher,p);
    strcpy(author,a);
    edition = e;
    price = pr;
    noOfPages = n;
}

Book::Book(int i, const char *t, const char *a, double pr, int n)
{
    id = i;
    strcpy(title,t);
    strcpy(author,a);
    price = pr;
    noOfPages = n;
}

int Book::getId()
{
    return id;
}

char * Book::getTitle()
{
    return title;
}

char * Book::getAuthor()
{
    return author;
}

char * Book::getPublisher()
{
    return publisher;
}

int Book::getEdition()
{
    return edition;
}

double Book::getPrice()
{
    return price;
}

int Book::getNoOfPages()
{
    return noOfPages;
}

void Book::setId(int i)
{
    id = i;
}

void Book::setTitle(const char * t)
{
    strcpy(title, t);
}

void Book::setAuthor(const char *a)
{
    strcpy(author, a);
}

void Book::setPublisher(const char *p)
{
    strcpy(publisher,p);
}

void Book::setEdition(int e)
{
    edition = e;
}

void Book::setPrice(double pr)
{
    price = pr;
}

void Book::setNoOfPages(int n)
{
    noOfPages = n;
}

bool Book ::operator<(Book &b)
{
    if(price<b.price)
    {
        return true;
    }
    else if(price==b.price && noOfPages< b.noOfPages)
    {
        return true;
    }
    return false;
}

bool Book::operator!=(Book &b)
{
    if(price != b.price)
    {
        return true;
    }
    return false;
}

void Book:: accept()
{
    cout<<"Enter Book Info"<<endl;
    cin>>id>>title>>author>>publisher>>edition>>price>>noOfPages;
}

ostream operator<<(ostream &cout, Book &b)
{
    cout<<"------Book Info------"<<endl;
    cout<<"Id : "<<b.id<<endl;
    cout<<"Title : "<<b.title<<endl;
    cout<<"Author : "<<b.author<<endl;
    cout<<"Publisher : "<<b.publisher<<endl;
    cout<<"Edition : "<<b.edition<<endl;
    cout<<"Price : "<<b.price<<endl;
    cout<<"No of Pages : "<<b.noOfPages<<endl;
}

void Book::display()
{
    cout<<"------Book Info------"<<endl;
    cout<<"Id : "<<id<<endl;
    cout<<"Title : "<<title<<endl;
    cout<<"Author : "<<author<<endl;
    cout<<"Publisher : "<<publisher<<endl;
    cout<<"Edition : "<<edition<<endl;
    cout<<"Price : "<<price<<endl;
    cout<<"No of Pages : "<<noOfPages<<endl;
}
