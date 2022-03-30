class Weather
{
    int id;
    char cityName[20];
    double temprature;
    double humidity;
    double pressure;
    public:
    Weather(int=1, const char * = "PUNE", double=25, double=100, double=20);
    void accept();
    void display();
};