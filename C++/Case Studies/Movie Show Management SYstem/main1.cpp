#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
#include "Movie.h"
using namespace std;
Movie m;
void create_student();
void display_all();
void book(const char *);
void seat();
void find(const char *);
int main()
{
    char c;
    do
    {
        char ch;
        cout<<"\n\tWELCOME TO MOVIESSTAR"<<endl;
        cout << "\n\n\t    MENU   " << endl;
        cout << "\n\t1.Add new Movie" << endl;
        cout << "\n\t2.Book Seat" << endl;
        cout << "\n\t3.Available Seats" << endl;
        cout << "\n\t4.Find Movie By id " << endl;
        cout << "\n\t5.Movie Details" << endl;
        cout << "\n\t6.Average Price of ticket " << endl;
        cin >> ch;
        system("cls");
        switch (ch)
        {
        case '1':
            create_student();
            break;
        case '2':
            static char mn[20];
            cout << "Enter Movie Name" << endl;
            cin >> mn;
            book(mn);
            break;
        case '3':
            seat();
            break;
        case '4':
            char i[20];
            cout << "Enter Movie Id" << endl;
            cin >> i;
            find(i);
            break;
        case '5':
            display_all();
            break;
        case '6':
            exit(0);
            break;
        }
        cout << "Do you want to continue y/n" << endl;
        cin >> c;
        system("cls");
    } while (c != '6');
    return 0;
}

void create_student()
{
    // Movie m;
    ofstream oFile;
    oFile.open("student.dat", ios::binary | ios::app);
    m.accept();
    oFile.write(reinterpret_cast<char *>(&m), sizeof(Movie));
    oFile.close();
    cout << "\n\nMovie Added Suceesfully ";
    cin.ignore();
    cin.get();
}

void display_all()
{
    // Movie m;
    ifstream inFile;
    inFile.open("student.dat", ios::binary);
    if (!inFile)
    {
        cout << "File could not be opened !! Press any Key to exit";
        cin.ignore();
        cin.get();
        return;
    }
    cout << "\n\n\tDISPLAYING ALL RECORDS\n\n";
    while (inFile.read(reinterpret_cast<char *>(&m), sizeof(Movie)))
    {
        m.displayMovieInfo();
        cout << "\n\n====================================\n";
    }
    inFile.close();
    cin.ignore();
    cin.get();
}

void book(const char *n)
{
    // Movie m;
    ifstream iFile;
    iFile.open("student.dat", ios::binary);
    if (!iFile)
    {
        cout << "File could not be opened... Press any Key to exit";
        cin.ignore();
        cin.get();
        return;
    }
    bool flag = false;
    while (iFile.read(reinterpret_cast<char *>(&m), sizeof(Movie)))
    {
        if (!strcmp(m.getMovieName(), n))
        {
            m.bookTicket();
            flag = true;
            //m.availableSeats();
        }
    }
    iFile.close();
    if (flag == false)
        cout << "\n\nrecord does not exist";
    cin.ignore();
    cin.get();
}

void seat()
{
    // Movie m;
    m.availableSeats();
}

void find(const char *i)
{
    ifstream iFile;
    //Movie m;
    iFile.open("student.dat", ios::binary);
    if (!iFile)
    {
        cout << "File could not be opened... Press any Key to exit";
        cin.ignore();
        cin.get();
        return;
    }
    bool flag = false;
    while (iFile.read(reinterpret_cast<char *>(&m), sizeof(Movie)))
    {
        if (!strcmp(m.getMovieId(),i))
        {
            m.findmovieDetails();
            flag = true;
        }
    }
    iFile.close();
    if (flag == false)
        cout << "\n\nrecord does not exist";
    cin.ignore();
    cin.get();
}