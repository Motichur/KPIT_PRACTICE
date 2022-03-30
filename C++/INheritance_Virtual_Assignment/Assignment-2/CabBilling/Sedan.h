#include"Cab.h"

class Sedan
{
    int distance, travel_time, waiting_time;
    int base = 40;
    int rate;
    public:
    Sedan(int=1,int=10,int=10,int =6);
    void calcBill();
    void display();
};