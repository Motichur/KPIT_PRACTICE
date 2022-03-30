#include"Consumer.h"

class Domestic:public Consumer
{
    int energyUnits;
    double rate;
    public:
    Domestic(int =1,double=9);
    double calcBill();
    void dispalyInfo();
};