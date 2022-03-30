class Currency
{
    double rupess;
    public:
    Currency(double=100);
    void accept();
    void display();
    Currency operator+(Currency &);
    Currency operator-(Currency &);
    Currency operator++();
};