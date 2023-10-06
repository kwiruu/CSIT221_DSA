class List {
	public:
	virtual void add(int num) = 0;
	virtual int get(int pos) = 0;
	virtual void removeLast() = 0;
	virtual void removeFirst() = 0;
	virtual void print() = 0;
	virtual void removeAt(int pos)=0;
//	virtual void foo() = 0;
	virtual void addAt(int pos, int num) = 0;
};
