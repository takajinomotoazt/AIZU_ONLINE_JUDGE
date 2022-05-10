#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void bubbleSort(int *array, int array_size) {
    int k;
    for (int i = 0; i < (array_size - 1); i++) {
        for (int j = (array_size - 1); j > i; j--) {
            if (array[j] < array[j - 1]) {
                k = array[j];
                array[j] = array[j - 1];
                array[j - 1] = k;
                cnt++;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    bubbleSort(array, sizeof(array) / sizeof(array[0]));

    for (int i = 0; i < n; i++) {
        cout << array[i];
        if (i >= 0 && i < n - 1) cout << " ";
    }
    cout << endl;
    cout << cnt << endl;

    return 0;
}
