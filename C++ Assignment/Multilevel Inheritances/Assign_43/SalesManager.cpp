#include"SalesManager.h"

SalesManager::SalesManager()
{

}

SalesManager::SalesManager(int i, const char *n, int d, int m, int y, int b, int sa,int h,int r, int s, int c)
                            :Manager(i,n,d,m,y,b,sa),SalesPerson(i,n,d,m,y,h,r,s,c)
{

}

void SalesManager::display()
{
    Manager::display();
    SalesPerson::display();
}