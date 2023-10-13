class List{
    public:
    virtual void addFirst(int num)=0;
    virtual void addLast(int num)=0;
    virtual void removeFirst()=0;
    virtual void removeLast()=0;
    virtual void print()=0;
    virtual void addAt(int pos, int num)= 0;
};