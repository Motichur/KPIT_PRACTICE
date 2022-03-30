class Matrix
{
    int arr[10][10]={0};
    int row,col;
    public:
    Matrix();
    Matrix(int, int);
    Matrix operator+(Matrix &);
    Matrix operator!();
    void accept();
    void display();
};