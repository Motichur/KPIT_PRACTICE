class Array
{
    int size;
    int *arr;
    public:
    Array();
    Array(int);
    Array(Array &);
    void display();
    ~Array();
};