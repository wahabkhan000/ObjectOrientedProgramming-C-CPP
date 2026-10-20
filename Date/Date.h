#include <string>
class Date{
    private:
    int day{1};
    int month{1};
    int year{1};
    std::string calander[12]{"January","Feburary","March","April","May","June","July","August","September","October","November","December"};

    public:
    Date(int,int,int);
    Date(const Date &);
    void incrementDay();
    void print() const;
    void printLong() const;
};