class Distance
{
private:
    /* data */
    double feet;
    double inch;
public:
    Distance(/* args */);
    Distance(double f, double i);
    ~Distance();

    Distance add_distance(Distance f);

    void getObj();
};

