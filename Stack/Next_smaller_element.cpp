#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Function to find the next smaller element for each element in the array
vector<int> nextSmallerElement(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);  // To store the result
    stack<int> s;           // Stack to store the indices of the elements

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements from the stack while they are greater or equal to arr[i]
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }

        // If the stack is empty, there is no smaller element to the right
        if (s.empty()) {
            result[i] = -1;
        } else {
            // The top of the stack is the next smaller element
            result[i] = s.top();
        }

        // Push the current element onto the stack
        s.push(arr[i]);
    }

    return result;
}

int main() {
    vector<int> arr;
    int n;

    // Input size and array elements
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // Call the function to find next smaller elements
    vector<int> result = nextSmallerElement(arr);

    // Output the result
    cout << "Next smaller elements: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
