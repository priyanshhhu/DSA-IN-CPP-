// first negative integer in every window of size (order of N time)

    /*
    steps:
    1. push the element
    2. print first negative element in queue
    3. pop the first element
    */

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int display(queue<int> q) {
    while (!q.empty()) {
        if (q.front() < 0) {
            return q.front();
        }
        q.pop();
    }
    // Return some default value if there's no negative integer
    return 0; // For example, returning 0
}

int main() {
    int arr[] = {-1, 2, -3, -5, 4, 6, 7, -7};
    int n = 8;
    int k = 3;

    queue<int> q;
    vector<int> ans;

    // Push initial elements into the queue
    for (int i = 0; i < k - 1; i++) {
        q.push(arr[i]);
    }

    // Iterate over the array to push elements into the queue and pop out the first element of the window
    for (int i = k - 1; i < n; i++) {
        q.push(arr[i]);
        ans.push_back(display(q));
        q.pop();
    }

    // Output the results
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
