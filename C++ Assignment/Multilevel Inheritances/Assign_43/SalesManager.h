#include"SalesPerson.h"
#include"Manager.h"

class SalesManager:public SalesPerson,Manager
{
    public:
    SalesManager();
    SalesManager(int, const char *, int, int, int, int, int, int, int, int, int);
    void display();
};