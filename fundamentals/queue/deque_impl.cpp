#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1); dq.push_back(2);
    dq.push_front(0);
    cout << "Front: " << dq.front() << " Back: " << dq.back() << "\n";
    dq.pop_front(); dq.pop_back();
    cout << "After pops - Front: " << dq.front() << "\n";
}
