#include <bits/stdc++.h>
using namespace std;

int main() {
    // Max heap (default)
    priority_queue<int> maxPQ;
    maxPQ.push(3); maxPQ.push(1); maxPQ.push(4);
    cout << "Max: " << maxPQ.top() << "\n";

    // Min heap
    priority_queue<int, vector<int>, greater<int>> minPQ;
    minPQ.push(3); minPQ.push(1); minPQ.push(4);
    cout << "Min: " << minPQ.top() << "\n";
}
