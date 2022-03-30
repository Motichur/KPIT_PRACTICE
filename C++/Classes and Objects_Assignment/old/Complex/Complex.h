class Complex
{
    int real;
    int img;
    public:
    Complex(int=0,int =0);
    Complex operator+(Complex &);
    Complex operator-(Complex &);
    Complex operator*(Complex &);
    void disp();
    void accept();
    void display();
};