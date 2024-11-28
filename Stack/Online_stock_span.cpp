#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> calculateStockSpan(const vector<int>& prices) {
    int n = prices.size();
    vector<int> spans(n);    // Resultant span array
    stack<int> s;            // Stack to store indices of the days

    // Iterate over each day's price
    for (int i = 0; i < n; ++i) {
        // While stack is not empty and the current price is greater than or equal to price at the top of the stack
        while (!s.empty() && prices[s.top()] <= prices[i]) {
            s.pop();
        }

        // Calculate the span for the current day
        if (s.empty()) {
            spans[i] = i + 1; // If stack is empty, span is i+1
        } else {
            spans[i] = i - s.top(); // Else, span is the difference of current index and top of stack
        }

        // Push the current index onto the stack
        s.push(i);
    }

    return spans;
}

int main() {
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    vector<int> spans = calculateStockSpan(prices);

    cout << "Stock Prices: ";
    for (int price : prices) {
        cout << price << " ";
    }
    cout << "\nStock Spans: ";
    for (int span : spans) {
        cout << span << " ";
    }
    cout << endl;

    return 0;
}
