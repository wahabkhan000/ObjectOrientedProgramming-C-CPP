class store{
    int itemNumber{};
    int quantity{};
    double cost{};
    double totalCost{};

    public:
    store(int,int,double);
    void setItemNumber(int);
    void setQuantity(int);
    void setCost(double);
    void setTotalCost();

    int getItemNumber() const;
    int getQuantity() const;
    double getCost() const;
    double getTotalCost() const;
};