#include <iostream>
#include <cstring>
#include <vector>
#include <functional>
#include <algorithm>
#include <fstream>
#include "Book.h"
using namespace std;

bool comp(Book &b1, Book &b2)
{
    return b1.getPrice() < b2.getPrice();
}
int main()
{
    // Book b1(1001, "C++ programming", "Scott Meyers", "Packt", 3, 800, 360),
    //     b2(1002, "C", "ABC", "XYZ", 1, 400, 300),
    //     b3(1003, "JAVA", "PQR", "KPIT", 3, 600, 380),
    //     b4(1004, "HTML5", "ABC", "HT", 4, 500, 200);

    Book b1(1001, "C++", "Scott", 500, 360),
        b2(1002, "STL", "Meyers", 500, 360),
        b3(1003, "Linux", "Kerrisk", 600, 360),
        b4(1003, "Unix", "Sumitabh", 500, 360),
        b5(1003, "TDD", "Richard", 500, 360);
    vector<Book> v1,v2;
    v1.push_back(b1);
    v1.push_back(b2);
    v1.push_back(b3);
    v1.push_back(b4);
    v1.push_back(b5);
    vector<Book>::iterator itr, itr1;
    // for(itr=v1.begin();itr!=v1.end();itr++)
    // {
    //     (*itr).display();
    //     cout<<endl;
    // }

    //Finding book bu id
    // int i;
    // cout<<"Enter book id "<<endl;
    // cin>>i;
    // for(itr=v1.begin();itr!=v1.end();itr++)
    // {
    //     if(i==(*itr).getId())
    //     {
    //         (*itr).display();
    //         cout<<endl;
    //     }
    // }

    //Finding book by title
    // char na[20];
    // cout<<"Enter title "<<endl;
    // cin>>na;
    // for(itr=v1.begin();itr!=v1.end();itr++)
    // {
    //     const char * c = (*itr).getTitle();
    //     if(!strcmp(na,c))
    //     {
    //         (*itr).display();
    //         cout<<endl;
    //     }
    // }
    //Printing max and min book using price
    // Book b4 = *max_element(v1.begin(),v1.end());
    // b4.display();
    // Book b5 = *min_element(v1.begin(),v1.end());
    // b5.display();

    //Finding book by noofpages
    // Book b4 = *max_element(v1.begin(),v1.end(),[](Book b1, Book b2){ return b1.getNoOfPages()<b2.getNoOfPages();});
    // b4.display();
    // Book b5 = *min_element(v1.begin(),v1.end());
    // b5.display();

    //Finding book in given price range
    // int s,e;
    // cout<<"Enter  range of price"<<endl;
    // cin>>s>>e;

    // for(itr=v1.begin();itr!=v1.end();itr++)
    // {
    //     if((*itr).getPrice()>=s && (*itr).getPrice()<=s)
    //     {
    //         (*itr).display();
    //         cout<<endl;
    //     }
    // }

    //Update book price by its id
    // int i;
    // cout<<"Enter book id "<<endl;
    // cin>>i;
    // for(itr=v1.begin();itr!=v1.end();itr++)
    // {
    //     if(i==(*itr).getId())
    //     {
    //         int np;
    //         cout<<"Enter new price of book"<<endl;
    //         cin>>np;
    //         (*itr).setPrice(np);
    //         (*itr).display();
    //         cout<<endl;
    //     }
    // }

    //update book price by its title name
    // char na[20];
    // cout<<"Enter title "<<endl;
    // cin>>na;
    // for(itr=v1.begin();itr!=v1.end();itr++)
    // {
    //     const char * c = (*itr).getTitle();
    //     if(!strcmp(na,c))
    //     {
    //         int np;
    //         cout<<"Enter new price of book"<<endl;
    //         cin>>np;
    //         (*itr).setPrice(np);
    //         (*itr).display();
    //         cout<<endl;
    //     }
    // }

    //sort based on Title
    // sort(v1.begin(), v1.end(),[](Book b1, Book b2)
    //     { return b1.getTitle()>b2.getTitle();});
    // for(itr=v1.begin();itr!=v1.end();itr++)
    // {
    //     (*itr).display();
    //     cout<<endl;
    // }

    //sort based on Author
    // sort(v1.begin(), v1.end(),[](Book b1, Book b2)
    //     { return b1.getAuthor()>b2.getAuthor();});
    // for(itr=v1.begin();itr!=v1.end();itr++)
    // {
    //     (*itr).display();
    //     cout<<endl;
    // }

    //Finding book by author
    // char na[20];
    // cout<<"Enter Author name "<<endl;
    // cin>>na;
    // for(itr=v1.begin();itr!=v1.end();itr++)
    // {
    //     const char * c = (*itr).getAuthor();
    //     if(!strcmp(na,c))
    //     {
    //         (*itr).display();
    //         cout<<endl;
    //     }
    // }

    fstream myfile;
    myfile.open("eg.txt",ios::out|ios::app|ios::binary);
    // for (itr=v1.begin(); itr != v1.end(); itr++)
    // {
    //     myfile<<(*itr);
    // }
    myfile.write((char *)&v1,sizeof(v1));
    myfile.close();
    // for (itr = v1.begin(); itr != v1.end() - 1; itr++)
    // {
    //     for (itr1 = itr; itr1 != v1.end(); itr1++)
    //     {
    //         if ((*itr) != (*itr1))
    //         {
    //             (*itr1).display();
    //             cout<<endl;
    //             break;
    //         }
    //     }
    // }
    //v1.clear();
    fstream fout("book.txt", ios::out | ios::app | ios::binary);
    for(int i=0; i<v1.size(); i++)
    {
        fout.write((char*)&v1[i],sizeof(Book));
    }
    int cnt=v1.size();
    v1.clear();
    fout.close();
    
    fstream fin("book.txt", ios::in | ios::binary);
    for(int i=0; i<cnt; i++)
    {
        fin.read((char*)&b1,sizeof(Book));
        v2.push_back(b1);
    }
    fin.close();
    
    for(int i=0; i<v2.size(); i++)
    {
        v2[i].display();
    }
    
    return 0;
}