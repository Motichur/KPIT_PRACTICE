class CANFrame
{
    int id;
    int length;
    char data[20];
    public:
    CANFrame(int=123, int=7,const char * = "A1B2");
    void accept();
    void display();
};

