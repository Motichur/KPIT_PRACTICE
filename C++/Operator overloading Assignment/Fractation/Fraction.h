class Fraction
{
    int numerator;
    int denometor;
    public:
    Fraction(int=1, int=1);
    void display();
    Fraction operator+(Fraction &);
    Fraction operator-(Fraction &);
    Fraction operator*(Fraction &);
};