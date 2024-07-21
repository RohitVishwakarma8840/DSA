#include <iostream>
using namespace std;

void towerhanoi(int n, string src, string hel, string des) {
    if (n == 1) {
        cout << "transfer disk " << n << " from " << src << " to " << des << endl;
        return; // Return after completing the base case
    }

    towerhanoi(n - 1, src, des, hel);
    cout << "transfer disk " << n << " from " << src << " to " << des << endl;
    towerhanoi(n - 1, hel, src, des);
}

int main() {
    int n = 3; // Example with 3 disks
    towerhanoi(n, "S", "H", "D");
    return 0;
}
