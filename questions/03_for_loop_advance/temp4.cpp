#include <iostream>
using namespace std;

int main() {

    // There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
    
    int first_term = 220;
    int common_difference = 7;
    int limit = 730;

    // Starting from the first term, generate terms of the AP until the limit
    for (int term = first_term; term <= limit; term += common_difference) {
        cout << term << endl;
    }

    return 0;
}