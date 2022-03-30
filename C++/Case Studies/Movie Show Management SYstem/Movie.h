#include<iostream>
using namespace std;

class Movie
{
    char movieName[20];      //Movie name
    char movieDirector[20];  // Movie Director
    char movieRating;        // movie rating
    int movieTime;           // movie time
    char movieCast[100];     // movie cast
    char movieId[20];        // movie Id
    int show;                // Show variable
    int seat_n=30;               // total seats for movie
    int seat_p=20;
    int seat_s=10;
    int bookseat;            // boking seat
    double total;            // total bill
    int a;
    int price;
    char * mon;
    public:
    Movie();
    Movie(const char *, const char * , const char *, char, int , const char *);
    char * getMovieId();
    char * getMovieName();
    void bookTicket();
    char * bookMovie();
    void findmovieDetails();
    void accept();
    void displayMovieInfo() const;
    void displayBill();
    int selectShow();
    void availableSeats();
    int selectSeatype();
    void totalBill();
    void avragePrice();
    friend ostream operator<<(ostream &, Movie &);
    void showdata() const;
};