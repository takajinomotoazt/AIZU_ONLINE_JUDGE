#include <bits/stdc++.h>

using namespace std;

void bubbleSort(string *array, int array_size) {
    string k;
    for (int i = 0; i < (array_size - 1); i++) {
        for (int j = (array_size - 1); j > i; j--) {
            if ((array[j])[1] < (array[j - 1])[1]) {
                k = array[j];
                array[j] = array[j - 1];
                array[j - 1] = k;
            }
        }
    }
}

void selectionSort(string *array, int array_size) {
    int m;
    string min;

    for (int i = 0; i < array_size - 1; i++) {
        m = i;
        for (int j = i + 1; j < array_size; j++) {
            if ((array[j])[1] < (array[m])[1]) {
                m = j;
            }
        }
        min = array[m];
        array[m] = array[i];
        array[i] = min;
    }
}

bool isStable(string *array1, string *array2, int array_size) {
    bool ret = true;
    for (int i = 0; i < array_size - 1; i++) {
        for (int j = i + 1; j < array_size; j++) {
            for (int k = 0; k < array_size; k++) {
                for (int l = k + 1; l < array_size; l++) {
                    if (((array1[i])[1] == (array1[j])[1]) &&
                        (array1[i] == array2[l]) && (array1[j] == array2[k])) {
                        ret = false;
                        break;
                    }
                }
            }
        }
    }

    return ret;
}

int main() {
    int n;
    cin >> n;

    string array0[n];
    string array1[n];
    string array2[n];

    for (int i = 0; i < n; i++) {
        cin >> array0[i];
        array1[i] = array0[i];
        array2[i] = array0[i];
    }

    bubbleSort(array1, sizeof(array1) / sizeof(array1[0]));
    selectionSort(array2, sizeof(array2) / sizeof(array2[0]));

    for (int i = 0; i < n; i++) {
        cout << array1[i];
        if (i >= 0 && i < n - 1) cout << " ";
    }
    cout << endl;

    if (isStable(array0, array1, n)) {
        cout << "Stable";
    } else {
        cout << "Not stable";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << array2[i];
        if (i >= 0 && i < n - 1) cout << " ";
    }
    cout << endl;

    if (isStable(array0, array2, n)) {
        cout << "Stable";
    } else {
        cout << "Not stable";
    }
    cout << endl;

    return 0;
}
