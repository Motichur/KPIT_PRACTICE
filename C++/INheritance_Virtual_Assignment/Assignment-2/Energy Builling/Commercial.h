#include"Consumer.h"

class Commercial:public Consumer
{
    int energyUnits;
    double rate;
    public:
    Commercial(int =1,double=5);
    double calcBill();
    void dispalyInfo();
};