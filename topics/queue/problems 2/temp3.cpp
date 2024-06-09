// first negative integer in every window of size 

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    queue<int> q;
    int arr[] = {1, 2, -2, 4, -6, -1, -8};
    int k = 3;
    int n = 7;

    for (int i = 0; i < k - 1; i++) {
        if (arr[i] < 0) {
            q.push(i);
        }
    }

    vector<int> ans;

    for (int i = k - 1; i < n; i++) {
        if (arr[i] < 0) {
            q.push(i);
        }

        if (q.empty()) {
            ans.push_back(0);
        } else {
            if (q.front() <= i - k) {
                q.pop();
            }

            if (!q.empty()) {
                ans.push_back(arr[q.front()]);
            } else {
                ans.push_back(0);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
