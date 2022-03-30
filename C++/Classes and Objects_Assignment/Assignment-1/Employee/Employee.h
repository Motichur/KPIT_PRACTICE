class Employee
{
    int empId;
    char name[20];
    double experience;
    double salary;
    public:
    Employee(int = 1, const char * = "ABC", double=5, double = 50000);
    void accept();
    void display();
};