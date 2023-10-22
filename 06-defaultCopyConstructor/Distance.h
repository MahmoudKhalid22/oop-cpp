class Distance
{
private:

    int feet;
    int inch;

public:
    Distance();
    Distance(double feet, double inch);
    ~Distance();

    double  getFeet(){
        return feet;
    }
    double  getInches(){
        return inch;
    }
};


