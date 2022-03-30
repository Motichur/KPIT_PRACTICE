class Contact
{
    char fname[20];
    char lname[20];
    char primarNumber[20];
    char secondaryNumber[20];
    char emailId[20];
    public:
    Contact(const char * ="ABC", const char * = "PQR", const char * ="9874581268", const char * ="9741258620" ,const char * ="abc@gmail.com");
    void accept();
    void display();
    char * getFname();
    char * getLname();
    char * getPrimaryNumber();
    char * getSecondaryNumber();
    char * getEmail();
    void setFname(const char *);
    void setLname(const char *);
    void setPrimaryNumber(const char *);
    void setSecondaryNumber(const char *);
    void setEmail(const char *);
    void updateDetails();
};