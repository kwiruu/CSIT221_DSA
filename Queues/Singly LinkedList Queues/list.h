class List {
    public:
    virtual void add(int) = 0;
    virtual int get(int pos) = 0;
    virtual int remove(int num) = 0;
    virtual void print() = 0;
    virtual void addAt(int pos, int num) = 0;
    virtual int removeAt(int pos) = 0;
    virtual int retain(int num)=0;
    virtual int Size()=0;
};