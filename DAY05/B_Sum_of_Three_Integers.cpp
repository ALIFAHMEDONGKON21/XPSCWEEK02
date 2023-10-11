#include <iostream>

using namespace std;

long long countAssignments(int K, int S) {
    long long count = 0;
    
    // Iterate through all possible values of X
    for (int X = 0; X <= K; X++) {
        // Check if the remaining value S - X is within the valid range for Y and Z
        if (S - X >= 0 && S - X <= 2 * K) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int K, S;
    cin >> K >> S;

    long long result = countAssignments(K, S);
    cout << result << endl;

    return 0;
}
