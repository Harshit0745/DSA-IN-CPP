
#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 4, 1, 6, 3, 7};
    int indx = -1;

    int n = sizeof(a) / sizeof(int);
    int search_value;

    cin >> search_value;

    for (int i = 0; i < n; i++) {
        if (search_value == a[i]) {
            indx = i;
            break;
        }
    }

    if (indx == -1) {
        cout << "Key not found\n";
    }
    else {
        cout << "Key found at " << indx << endl;
    }

    return 0;
}