// Josephus Problem / Predict the winner
#include <iostream>
#include <vector>
using namespace std;

int winner(vector<bool>& person, int n, int index, int person_left, int k) {
    // base case
    if (person_left == 1) {
        for (int i = 0; i < n; i++) {
            if (person[i] == 0) {
                return i;
            }
        }
    }

    int remove = (k - 1) % person_left;
    while (remove--) {
        index = (index + 1) % n;
        while (person[index] == 1) {
            index = (index + 1) % n;
        }
    }
    person[index] = 1;
    while (person[index] == 1) {
        index = (index + 1) % n;
    }
    return winner(person, n, index, person_left - 1, k); // Add return statement
}

int main() {

    int n = 5;
    int k = 3;

    vector<bool> person(n, 0);
    cout << winner(person, n, 0, n, k) + 1;
}
