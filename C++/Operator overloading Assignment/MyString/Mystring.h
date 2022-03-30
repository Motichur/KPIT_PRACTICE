class Mystring
{
    char str[20];
    public:
    Mystring(const char * ="ABC");
    void reverse();
    int length();
    void display();
    Mystring operator+(Mystring &);
    Mystring operator+=(Mystring &);
};