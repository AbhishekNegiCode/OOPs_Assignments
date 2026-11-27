#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {
    stack<int> values;
    values.push(10); values.push(20); values.push(30);
    cout << "Stack top: " << values.top() << '\n';
    values.pop();
    if (!values.empty()) cout << "Stack top after pop: " << values.top() << '\n';
    queue<int> line;
    line.push(10); line.push(20); line.push(30);
    cout << "Queue front: " << line.front() << '\n';
    line.pop();
    if (!line.empty()) cout << "Queue front after pop: " << line.front() << '\n';
}
