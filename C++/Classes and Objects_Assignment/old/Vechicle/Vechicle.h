class Vechicle
{
    double speed;
    int rpm;
    double fuelLevel;
    char drivingMode[20];
    double engineTemperature;
    public:
    Vechicle(double = 80, int =50, double=80, const char * ="Manual", double=20);
    void accept();
    void display();
};