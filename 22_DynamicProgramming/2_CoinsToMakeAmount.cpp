#include <bits/stdc++.h> // Include the standard library headers

using namespace std; // Use the standard namespace

// Recursive function to find the minimum number of coins required to make up the given amount
int solve(vector<int>& coins, int amount) {
    if (amount == 0) { // If the amount is 0, no coins are required, return 0
        return 0;
    }
    if (amount < 0) { // If the amount becomes negative, it's not possible to make change, return INT_MAX
        return INT_MAX;
    }
    int mini = INT_MAX; // Initialize a variable to store the minimum number of coins, initially set to INT_MAX
    for (int i = 0; i < coins.size(); i++) { // Iterate through each coin denomination
        int ans = solve(coins, amount - coins[i]); // Recursively call the function with the remaining amount after using the current coin
        if (ans != INT_MAX) { // If the recursive call didn't return INT_MAX (i.e., change is possible)
            mini = min(mini, ans + 1); // Update the minimum number of coins by taking the minimum of the current value and the recursive call plus 1 (for the current coin)
        }
    }
    return mini; // Return the minimum number of coins required
}

int main() {
    vector<int> coins{2, 3, 5}; // Define the available coin denominations
    int amount = 11; // Define the amount to make change for
    int ans = solve(coins, amount); // Call the solve function to find the minimum number of coins required
    if (ans == INT_MAX) { // If the answer is INT_MAX, it's not possible to make change with the given coins
        cout << "Not possible to make the amount with given coins." << endl;
    } else {
        cout << "Minimum number of coins required: " << ans << endl; // Output the minimum number of coins required
    }
    return 0; // Return 0 to indicate successful execution
}
