#include <iostream>

using namespace std;

void insertion_sort(int data[], int n) {
    for (int i = 1; i < n; i++) {
        if (data[i - 1] > data[i]) {
            int j = i;
            int tmp = data[i];
            do {
                data[j] = data[j - 1];
                j--;
            } while (j > 0 && data[j - 1] > tmp);
            data[j] = tmp;
        }
        //
        for (int k = 0; k < n; k++) {
            cout << data[k];
            if (k >= 0 && k < n - 1) cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i >= 0 && i < n - 1) cout << " ";
    }
    cout << endl;

    insertion_sort(arr, n);

    return 0;
}
