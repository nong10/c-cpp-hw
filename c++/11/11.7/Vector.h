class Vector {
    
    private:
    
        int size;
        double* varr;   // varr stands for vector array
    
    public:

        Vector();
        Vector(int nSize, double* nVarr);
        Vector(const Vector&);

        ~Vector();

        // setters:
        void setSize(int nSize);
        void setVectorList(double* nVarr);
        // getters:
        int getSize() const;
        double* getVectorList() const;

        // others:
        double norm() const;
        Vector add(const Vector) const;
        Vector subtract(const Vector) const;
        double product(const Vector) const;
        void print() const;
};
