#include<iostream>
using namespace std;

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    int sum, absDifference;

    cin >> a >> b;

    sum = *pa + *pb;
    absDifference = abs(*pa - *pb);

    cout << sum << "\n" << absDifference;

    return 0;
}
