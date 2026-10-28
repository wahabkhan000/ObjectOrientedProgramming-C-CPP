#include <iostream>
class String{
    char *str{};
    int length(const char*) const;
    void dynamiccopy(const char*,char*&,int);

    public:
    String();
    String(const char*);
    String(const String&);
    void setstring(const char*);
    char* getstring() const;
    int getlength() const;
    bool operator==(const String&) const;
    String& operator=(const String&);
    String& operator=(const char*);
    String& operator+(const char*);
    char& operator[](int);
    const char operator[](int)const;
    ~String();
};

std::ostream& operator<<(std::ostream&,const String&);
std::istream& operator>>(std::istream&, String&);