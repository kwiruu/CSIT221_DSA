class Queue{
    public:
    virtual void enqueue(int num)=0;
    virtual int dequeue()=0;
    virtual bool isEmpty()=0;
    virtual int size()=0;
};