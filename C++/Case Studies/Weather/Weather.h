class Weather
{
    char cityName[20];
    int cityCode;
    double temperature;
    double humidity;
    double pressure;

public:
    Weather();
    Weather(int, const char *, double, double, double);
    int getID();
    char *getName();
    double getTemprature();
    double getPressure();
    double getHumidity();
    void display();
};