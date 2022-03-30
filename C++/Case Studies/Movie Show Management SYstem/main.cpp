#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
#include "Movie.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    Movie *m = new Movie[n];
    // m1("A01", "ABC", "PQR", 'A', 120, "asd"),
    // m2("A02", "BCD", "QRS", 'A', 123, "mno"),
    // m3("A03", "CDE", "RST", 'A', 135, "fgh");
    vector<Movie> v1, v2;
    for (int i = 0; i < n; i++)
    {
        m[i].accept();
    }
    for (int i = 0; i < n; i++)
    {
        v1.push_back(m[i]);
    }
    fstream fout("Movie_Deatils.txt", ios::out | ios::app | ios::binary);
    for (int i = 0; i < v1.size(); i++)
    {
        fout.write((char *)&v1[i], sizeof(Movie));
    }
    int cnt = v1.size();
    //v1.clear();
    fout.close();
    fstream fin("book.txt", ios::in | ios::binary);

    // v1.push_back(m1);
    // v1.push_back(m2);
    // v1.push_back(m3);
    auto itr = v1.begin();

    char c;
    do
    {
        int ch;
        cout << "Enter your choice" << endl;
        cout << "1.Add new Movie" << endl;
        cout << "2.Book Seat" << endl;
        cout << "3.Available Seats" << endl;
        cout << "4. Average Price of ticket " << endl;
        cout << "5.Movie Details" << endl;
        cout << "6.Find Movie By id" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            (*itr).accept();
            fout.write((char *)&v1[0], sizeof(Movie));
            cnt = v1.size()+1;
            break;
        case 2:
            //(*itr).bookTicket();
            static char mn[20];
            cout << "Enter Movie Name" << endl;
            cin >> mn;
            for (int j = 0; j < n; j++)
            {
                char *n = v1[j].getMovieName();
                if (!strcmp(mn, n))
                {
                    for (int i = 0; i < cnt; i++)
                    {
                        fin.read((char *)&m[i], sizeof(Movie));
                        v2.push_back(m[i]);
                    }
                    fin.close();
                    v2[j].bookTicket();
                    v2[j].displayBill();
                }
            }
            break;
        case 3:
            (*itr).availableSeats();
            break;

        case 4:
            (*itr).avragePrice();
            break;

        case 5:
            //(*itr).displayMovieInfo();
            for (int i = 0; i < cnt; i++)
            {
                fin.read((char *)&m[0], sizeof(Movie));
                v2.push_back(m[i]);
            }
            fin.close();

            for (int i = 0; i < v2.size(); i++)
            {
                v2[i].displayMovieInfo();
            }
            break;
        case 6:
            char id[20];
            cout << "Enter Movie id" << endl;
            cin >> id;
            for (int i = 0; i < n; i++)
            {
                const char *mi = v1[i].getMovieId();
                if (!strcmp(id, mi))
                {
                    for (int i = 0; i < cnt; i++)
                    {
                        fin.read((char *)&m[0], sizeof(Movie));
                        v2.push_back(m[i]);
                    }
                    fin.close();
                    v2[i].displayMovieInfo();
                }
            }
            // for (; itr != v1.end(); itr++)
            // {
            //     const char *i = (*itr).getMovieId();
            //     if (!strcmp(id, i))
            //     {
            //         (*itr).findmovieDetails();
            //     }
            // }
        default:
            break;
        }
        cout << "Do you want to continue y/n" << endl;
        cin >> c;
    } while (c != 'n');
    // fstream fout("Movie Deatils.txt", ios::out | ios::app | ios::binary);
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     fout.write((char *)&v1[i], sizeof(Movie));
    // }
    // int cnt = v1.size();
    // v1.clear();
    // fout.close();
    // fstream fin("book.txt", ios::in | ios::binary);
    // for (int i = 0; i < cnt; i++)
    // {
    //     fin.read((char *)&m[0], sizeof(Movie));
    //     v2.push_back(m[i]);
    // }
    // fin.close();

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     v2[i].displayMovieInfo();
    // }
    return 0;
}
