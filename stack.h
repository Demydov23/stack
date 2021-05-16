class Stack {
public:
    Stack();
    ~Stack();

    bool isEmpty();
    void push(int elem);
    void show();
    void multiPop(int N);
    int  pop();

    Stack(const Stack& s);
    Stack& operator = (const Stack& s);

private:
    int* stack;
    int  size;

};
