#include"Cab.h"

class Prime
{
    int distance, travel_time, waiting_time;
    int base = 40;
    int rate;
    public:
    Prime(int=1,int=10,int=10,int =6);
    void calcBill();
    void display();
};