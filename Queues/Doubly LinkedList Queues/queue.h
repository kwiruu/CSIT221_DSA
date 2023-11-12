class Queue{
    public: 
    virtual void enqueueFirst(int num)=0;
    virtual void enqueueLast(int num)=0;
    virtual int dequeueFirst()=0;
    virtual int dequeueLast()=0;
    virtual int size()=0;
    virtual bool isEmpty()=0;
    virtual int first()=0;
    virtual void prints()=0;
};