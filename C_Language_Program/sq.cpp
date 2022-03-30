#include <iostream>
using namespace std;
int countTotalSquares(int num1, int num2)
{
    int result = 0;
    for(int i=num1; i<=num2; i++)
    {
        for(int j=1; j*j<=i; j++)
        {
            if(j*j == i)
            {
                result++;
            }
        }
    }
    return result;
}
int main()
{
    int num1 = 17;
    int num2 = 24;
    cout << "Total number of perfect squares between " << num1 << " and " << num2 << ": " << countTotalSquares(num1, num2) << endl;
    int num3 = 15;
    int num4 = 82;
    cout << "Total number of perfect squares between " << num3 << " and " << num4 << ": " << countTotalSquares(num3, num4) << endl;
    int num5 = 3;
    int num6 = 36;
    cout << "Total number of perfect squares between " << num5 << " and " << num6 << ": " << countTotalSquares(num5, num6) << endl;
    int num7 = 12;
    int num8 = 65;
    cout << "Total number of perfect squares between " << num7 << " and " << num8 << ": " << countTotalSquares(num7, num8) << endl;
    return 0;
}