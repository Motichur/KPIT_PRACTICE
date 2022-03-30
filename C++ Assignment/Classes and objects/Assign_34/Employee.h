class Employee
{
    int id;
    char emp_name[20];
    double salary;
    public:
    Employee();
    Employee(int,const char*,double);
    void setID(int);
    void setName(const char*);
    void setSalary(double);
    void accept();
    void display();
};