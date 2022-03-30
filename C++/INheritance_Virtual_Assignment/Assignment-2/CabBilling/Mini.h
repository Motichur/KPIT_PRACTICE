#include"Cab.h"

class Mini
{
    int distance, travel_time, waiting_time;
    int base = 40;
    int rate;
    public:
    Mini(int=1,int=10,int=10,int =6);
    void calcBill();
    void display();
};