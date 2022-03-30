#include"Citizen.h"
class Seniorcitize:public Citizen
{
    double income;
    public:
    Seniorcitize(double=500000);
    void calcTax();
    void display();
};