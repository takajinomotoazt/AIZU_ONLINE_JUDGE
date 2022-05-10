#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void selectionSort(int *array, int array_size) {
    int m, min;

    for (int i = 0; i < array_size - 1; i++) {
        m = i;
        for (int j = i + 1; j < array_size; j++) {
            if (array[j] < array[m]) {
                m = j;
            }
        }

        if (i != m) cnt++;
        min = array[m];
        array[m] = array[i];
        array[i] = min;
    }
}

int main() {
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    selectionSort(array, sizeof(array) / sizeof(array[0]));

    for (int i = 0; i < n; i++) {
        cout << array[i];
        if (i >= 0 && i < n - 1) cout << " ";
    }
    cout << endl;
    cout << cnt << endl;

    return 0;
}
