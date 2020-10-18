class Box {

    private:
    double height;
    double width;
    double depth;

    public:
    // constructors:
    Box();
    Box(double, double, double);
    // copy constructor:
    Box(Box&);
    // setters:
    void setHeight(double);
    void setWidth(double);
    void setDepth(double);
    // getters:
    double getHeight();
    double getWidth();
    double getDepth();

};
