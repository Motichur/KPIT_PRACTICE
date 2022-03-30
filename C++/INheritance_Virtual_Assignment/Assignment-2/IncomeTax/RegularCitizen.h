#include"Citizen.h"
class RegularCitizen:public Citizen
{
    double income;
    public:
    RegularCitizen(double=500000);
    void calcTax();
    void display();
};