#include <bits/stdc++.h>

using namespace std;

void shellSortX(int *array, int array_size) {
    for (int h = array_size / 2; h > 0; h /= 2) {
        for (int i = h; i < array_size; i += 1) {
            int k = array[i];

            int j;
            for (j = i; j >= h && array[j - h] > k; j -= h) {
                array[j] = array[j - h];
            }

            array[j] = k;
        }
    }
}

int cnt = 0;

void insertionSort(int *A, int n, int g) {
    for (int i = g; i <= n - 1; i++) {
        int v = A[i];
        int j = i - g;

        while (j >= 0 && A[j] > v) {
            A[j + g] = A[j];
            j = j - g;
            cnt++;
            A[j + g] = v;
        }
    }
}

void shellSort(int *A, int n) {
    //
    cnt = 0;
    int m = n / 2;
    if (m == 0) m = 1;
    int G[m];

    for (int i = 0; i < m; i++) {
        if (i == 0) {
            G[i] = m;
        } else {
            G[i] = G[i - 1] / 2;
            if (G[i] == 0) {
                G[i] = 1;
                m = i;
                break;
            }
        }
    }

    cout << m << endl;

    for (int i = 0; i < m; i++) {
        cout << G[i];
        if (i >= 0 && i < n - 1) cout << " ";
    }
    cout << endl;

    for (int i = 0; i < m; i++) {
        insertionSort(A, n, G[i]);
    }

    cout << cnt << endl;
}

int main() {
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    shellSort(array, sizeof(array) / sizeof(array[0]));

    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }

    return 0;
}
