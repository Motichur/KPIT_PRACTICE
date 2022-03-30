class Employee
{
    int id;
    char name[20];
    double basicSalary;
    public:
    Employee(int=1, const char * ="ABC", double =20000);
    virtual void payroll()=0;
    virtual void appraisal()=0; 
};