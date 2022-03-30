class Distance
{
    int meter;
    int killometer;
    public:
    Distance(int = 50, int = 25);
    void display();
    Distance operator+(Distance &);
    Distance operator-(Distance &);
    Distance operator++();
};