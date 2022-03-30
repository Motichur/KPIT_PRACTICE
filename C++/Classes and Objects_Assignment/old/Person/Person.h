class Person
{
    int id;
    char name[20];
    int age;
    char gender[5];
    public:
    Person();
    Person(int,const char *,int,const char *);
    int getId();
    char * getName();
    int getAge();
    char * getGender();
    void setId(int);
    void setName(const char *);
    void setAge(int);
    void setGender(const char *);
    void display();
};