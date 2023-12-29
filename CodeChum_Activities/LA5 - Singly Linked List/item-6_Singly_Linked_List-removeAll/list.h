class List {
    public:
    virtual void add(int) = 0;
    virtual int get(int pos) = 0;
    virtual int remove(int num) = 0;
    virtual void print() = 0;
    virtual int removeAll(int num)=0;

    // TODO add virtual method removeAll here
};