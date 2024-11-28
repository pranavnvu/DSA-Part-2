#include <iostream>
#include <stack>
using namespace std;

void collapse(stack<int>& S, int n) {
    // Stack to hold the first half of the elements
    stack<int> firstHalf;

    // Step 1: Reverse the stack so we can access elements from the bottom
    stack<int> reversedStack;
    while (!S.empty()) {
        reversedStack.push(S.top());
        S.pop();
    }

    // Step 2: Push the first half of the elements into the firstHalf stack
    for (int i = 0; i < n / 2; i++) {
        firstHalf.push(reversedStack.top());
        reversedStack.pop();
    }

    // Step 3: Collapse the stack by combining mirrored elements
    while (!firstHalf.empty()) {
        int first = firstHalf.top();    // Element from the first half
        int second = reversedStack.top(); // Element from the second half

        firstHalf.pop();
        reversedStack.pop();

        // Combine (e.g., sum) and push back into the original stack
        S.push(first + second);
    }
}

int main() {
    stack<int> S;
    int n;

    // Example: Adding elements to the stack
    cout << "Enter the number of elements (even number): ";
    cin >> n;

    cout << "Enter the elements of the stack from top to bottom: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        S.push(x);  // Push elements from top to bottom
    }

    // Call collapse function to collapse the stack
    collapse(S, n);

    // Output the collapsed stack
    cout << "Collapsed stack from top to bottom: ";
    while (!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }
    cout << endl;

    return 0;
}
