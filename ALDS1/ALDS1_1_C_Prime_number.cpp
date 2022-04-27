#include <math.h>

#include <iostream>

using namespace std;

bool isPrime(int x) {
    if (x == 2) return true;
    if (x < 2) return false;
    if ((x % 2) == 0) return false;

    int i = 3;
    while (i <= sqrt(x)) {
        if ((x % i) == 0) return false;
        i += 2;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
