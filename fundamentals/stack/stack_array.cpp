#include <bits/stdc++.h>
using namespace std;

class Stack {
    int arr[1000], top = -1;
public:
    void push(int x) { arr[++top] = x; }
    void pop() { if (top >= 0) top--; }
    int peek() { return arr[top]; }
    bool isEmpty() { return top == -1; }
};

int main() {
    Stack st;
    st.push(1); st.push(2); st.push(3);
    cout << st.peek() << "\n";
    st.pop();
    cout << st.peek() << "\n";
}
