#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ramitas(n);
    for (int i = 0; i < n; i++) {
        cin >> ramitas[i];
    }
    sort(ramitas.begin(), ramitas.end());
    vector<int> dp(n, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i < n; i++) {
        int count = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (ramitas[i] > ramitas[j] + ramitas[j - 1]) {
                count += dp[j];
            }
        }
        dp[i] = count;
    }
    cout << dp[n - 1] << endl;
    return 0;
}