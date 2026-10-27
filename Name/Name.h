#include <iostream>
class Name{
    private:
    char *first_name{};
    char middle_name{};
    char *last_name{};
    int lenght(const char*);
    void dynamiccopy(const char* src, char *&des);

    public:
    Name();
    Name(const char*,const char,const char*);
    Name(const Name &);
    void setfirstname(const char*);
    void setlastname(const char*);
    void setmiddlename(const char);
    char *getfirstname() const;
    char getmiddlename() const;
    char *getlastname() const;
    Name& operator=(const Name&);
    bool operator==(const Name&);
    ~Name();
};
std::ostream& operator<<(std::ostream&,const Name&);
std::istream& operator>>(std::istream&,Name&);