#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int> > activities(N);
    for (int i = 0; i < N; i++) {
        cin >> activities[i].first >> activities[i].second;
    }

    sort(activities.begin(), activities.end());

    int intersections = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (activities[i].second > activities[j].first) {
                intersections++;
            } else {
                break;
            }
        }
    }

    cout << intersections << endl;

    return 0;
}