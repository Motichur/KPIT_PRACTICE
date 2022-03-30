#include<iostream>
#include<cstring>
#include"Contact.h"
using namespace std;

Contact::Contact(const char *f , const char *l , const char *p, const char *s, const char *e)
{
    strcpy(fname,f);
    strcpy(lname,l);
    strcpy(primarNumber,p);
    strcpy(secondaryNumber,s);
    strcpy(emailId,e);
} 

char *  Contact::getFname()
{
    return fname;
}

char *  Contact::getLname()
{
    return lname;
}

char * Contact::getPrimaryNumber()
{
    return primarNumber;
}

char * Contact::getSecondaryNumber()
{
    return secondaryNumber;
}

char *  Contact::getEmail()
{
    return emailId;
}

void Contact:: setFname(const char *f)
{
    strcpy(fname,f);
}

void Contact:: setLname(const char *l)
{
    strcpy(lname,l);
}

void Contact::setPrimaryNumber(const char *p)
{
    strcpy(primarNumber,p);
}

void Contact::setSecondaryNumber(const char *s)
{
    strcpy(secondaryNumber,s);
}

void Contact:: setEmail(const char *e)
{
    strcpy(emailId,e);
}

void Contact::updateDetails()
{
    char f[20];
    char l[20];
    char s[20];
    char e[20];
    cout<<"ENter updated contact details"<<endl;
    cin>>f>>l>>s>>e;
    setFname(f);
    setLname(l);
    setSecondaryNumber(s);
    setEmail(e);
}

void Contact::accept()
{
    cout<<"Enter Contact Details"<<endl;
    cin>>fname>>lname>>primarNumber>>secondaryNumber>>emailId;
}

void Contact::display()
{
    cout<<"------Contact Details------"<<endl;
    cout<<"Name "<<fname<<" "<<lname<<endl;
    cout<<"Primary Contact Number "<<primarNumber<<endl;
    cout<<"Secondary Contact Number "<<secondaryNumber<<endl;
    cout<<"Email Id "<<emailId<<endl;
}