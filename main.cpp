#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack st;
    st.push(0);
    st.show(); // 0

    st.push(1);
    st.push(5);
    st.show(); // 0 1 5

    st.pop();
    st.show(); // 0 1

    st.push(3);
    st.push(4);
    st.push(5);
    st.multiPop(1);
    st.show(); // 0 1 3 4

    st.multiPop(3);
    st.show(); // 0

    st.push(55);
    st.push(99);
    Stack s1(st);
    s1.show(); // 0 55 99

    Stack s2;
    s2 = s1;
    s2.show(); // 0 55 99

    cout << "EasY";
    return 0;
}
