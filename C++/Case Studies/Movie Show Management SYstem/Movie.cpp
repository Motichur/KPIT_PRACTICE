#include <iostream>
#include <cstring>
#include "Movie.h"
using namespace std;

Movie::Movie()
{
}

Movie::Movie(const char *i, const char *n, const char *d, char r, int t, const char *c)
{
    strcpy(movieId, i);
    strcpy(movieName, n);
    strcpy(movieDirector, d);
    movieRating = r;
    movieTime = t;
    strcpy(movieCast, c);
}

char *Movie::getMovieId()
{
    return movieId;
}

char *Movie::getMovieName()
{
    return movieName;
}

char *Movie::bookMovie()
{
    static char mn[20];
    cout << "Enter Movie Name" << endl;
    cin >> mn;
    char *n = getMovieName();
    if (!strcmp(mn, n))
    {
        return mn;
    }
}
void Movie::findmovieDetails()
{
    cout << "Movie Name is : " << movieName << endl;
    cout << "Rating of Movie : " << movieRating << endl;
    cout << "Director of Movie : " << movieDirector << endl;
    cout << "Duration of Movie is : " << movieTime << endl;
}

int Movie::selectShow()
{
    cout << "Chosee Show" << endl;
    cout << "1->Show-1 12:00 PM" << endl;
    cout << "2->Show-2 4:00 PM" << endl;
    cout << "3->Show-3 8:00 PM" << endl;
    cin >> show;
    if (show == 1)
    {
        return 1;
    }
    else if (show == 2)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int Movie::selectSeatype()
{
    int seat_type;
    cout << "Select Seat Type" << endl;
    cout << "1.Noraml Seat" << endl;
    cout << "2.Pushback Seat" << endl;
    cout << "3.Sofa Seat" << endl;
    cin >> seat_type;
    switch (seat_type)
    {
    case 1:
        return 80;
    case 2:
        return 120;
    case 3:
        return 140;
    default:
        cout << "Wrong choice...!" << endl;
        break;
    }
}

void Movie::bookTicket()
{
    //mon = bookMovie();
    a = selectShow();
    price = selectSeatype();
    cout << "Enter Ticket Number" << endl;
    cin >> bookseat;
    if (price == 80)
    {
        if (bookseat > seat_n)
        {
            cout << "Ticket are Soldout" << endl;
        }
        else
        {
            seat_n = seat_n - bookseat;
            total = price * bookseat;
            displayBill();
        }
    }
    else if (price == 120)
    {
        if (bookseat > seat_p)
        {
            cout << "Ticket are Soldout" << endl;
        }
        else
        {
            seat_p = seat_p - bookseat;
            total = price * bookseat;
            displayBill();
        }
    }
    else
    {
        if (bookseat > seat_s)
        {
            cout << "Ticket are Soldout" << endl;
        }
        else
        {
            seat_s = seat_s - bookseat;
            total = price * bookseat;
            displayBill();
        }
    }
}
void Movie::totalBill()
{
    cout << "You have to Pay Rs." << total << endl;
}
void Movie::availableSeats()
{

    if (a == 1)
    {
        cout << "-------- Available seats for Show-1 --------" << endl;
        cout << "Noraml Seats " << seat_n << endl;
        cout << "Push-Back Seats " << seat_p << endl;
        cout << "Sofa Seats " << seat_s << endl;
    }
    else if (a == 2)
    {
        cout << "-------- Available seats for Show-2 --------" << endl;
        cout << "Noraml Seats " << seat_n << endl;
        cout << "Push-Back Seats " << seat_p << endl;
        cout << "Sofa Seats " << seat_s << endl;
    }
    else if (a == 3)
    {
        cout << "-------- Available seats for Show-3 --------" << endl;
        cout << "Noraml Seats " << seat_n << endl;
        cout << "Push-Back Seats " << seat_p << endl;
        cout << "Sofa Seats " << seat_s << endl;
    }
    else
    {
        cout << "-------- Available seats for Show-1 --------" << endl;
        cout << "Noraml Seats " << seat_n << endl;
        cout << "Push-Back Seats " << seat_p << endl;
        cout << "Sofa Seats " << seat_s << endl;
        cout << "-------- Available seats for Show-2 --------" << endl;
        cout << "Noraml Seats " << seat_n << endl;
        cout << "Push-Back Seats " << seat_p << endl;
        cout << "Sofa Seats " << seat_s << endl;
        cout << "-------- Available seats for Show-3 --------" << endl;
        cout << "Noraml Seats " << seat_n << endl;
        cout << "Push-Back Seats " << seat_p << endl;
        cout << "Sofa Seats " << seat_s << endl;
    }
}

void Movie::avragePrice()
{
    double avg;
    avg = ((10 * 140) + (20 * 120) + (30 * 120)) / 60;
    cout << "Average Price of Ticket is " << avg << endl;
}

void Movie::accept()
{
    cout << "Enter a New Movie Details" << endl;
    cout << "\nEnter Movie ID : ";
    cin >> movieId;
    cout << "\n\nEnter Movie Name : ";
    cin.ignore();
    cin.getline(movieName, 50);
    cout << "\n\nEnter Movie Rating : ";
    //cin.ignore();
    cin>>movieRating;
    cout << "\n\nEnter Movie Director Name : ";
    cin.ignore();
    cin.getline(movieDirector, 50);
    cout << "\n\nEnter Movie Cast Name : ";
    cin.ignore();
    cin.getline(movieCast, 50);
    cout<<"\n\nENter Movie Duration : ";
    cin>>movieTime;
}

void Movie::displayMovieInfo() const
{
    //cout << "/***--MOVIE INFO--***/" << endl;
    cout << "\nMovie Id : " << movieId ;//<< endl;
    cout << "\nMovie Name is : " << movieName ;//<< endl;
    cout << "\nRating of Movie : " << movieRating ;//<< endl;
    cout << "\nDirector of Movie : " << movieDirector ;//<< endl;
    cout << "\nMovie Cast : " << movieCast ;//<< endl;
    cout << "\nDuration of Movie is : " << movieTime;// << endl;
    //cout << endl;
}

void Movie::displayBill()
{
    cout << "------Bill Info------" << endl;
    //cout << "Movie name is " << mon << endl;
    if (price == 80)
    {
        cout << "Seat type is Normal " << endl;
    }
    else if (price == 120)
    {
        cout << "Seat type is Push Back " << endl;
    }
    else
    {
        cout << "Seat type is Sofa " << endl;
    }
    cout << "Booked Tickets " << bookseat << endl;
    totalBill();
}

ostream operator<<(ostream &cout, Movie &m)
{
    cout << "Movie Id " << m.movieId << endl;
    cout << "Movie Name is " << m.movieName << endl;
    cout << "Rating of Movie " << m.movieRating << endl;
    cout << "Director of Movie " << m.movieDirector << endl;
    cout << "Movie Cast " << m.movieCast << endl;
    cout << "Duration of Movie is " << m.movieTime << endl;
}