class Vehicle
{
    int policyid;
    char Vechicle_name[20];
    double amount;
    public:
    Vehicle();
    Vehicle(int,const char*,double);
    int getPoilcyId();
    char * getVechicleName();
    double getAmount();
    void setPoilcyId(int);
    void setVechicleName(const char *);
    void setAmount(double);
    void accept();
    void display();
};