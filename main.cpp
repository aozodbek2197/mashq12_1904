#include <bits/stdc++.h>
using namespace std;

int main() {
    // 34. Max element
    vector<int> v = {1,9,3};
    cout << *max_element(v.begin(), v.end()) << "\n";

    // 35. Min element
    cout << *min_element(v.begin(), v.end()) << "\n";

    // 36. Sum
    cout << accumulate(v.begin(), v.end(), 0);
}
