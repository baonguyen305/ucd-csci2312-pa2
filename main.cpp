#include <iostream>
#include "Point.h"
#include "Cluster.h"


using namespace std;

int main() {
    Clustering::Point p1;
    const int dims = 4;
    double values[dims] = { 11, 12, 13, 14 };
    Clustering::Point p1(dims, values);
    cout << p1 << endl;

    if (p1 == p1) {
        cout << "p1 is equal to itself" << endl;
    }

    Clustering::Point p2 = p1;
    if (p1 == p2)
        cout << "p2 is equal to p1" << endl;

    if (p1 != p2) {
        cout << "p1 and p2 are not equal to each other" << endl;
    }
    double values1[dims] = {13, 14, 15, 16};
    Clustering::Point p3(dims, values1);
    cout << p3 << endl;

    if (p3 < p1)
        cout << "p3 is less than p1" << endl;

    cout << p3 - p1 << endl;

    cout << p3 + p1 << endl;

    return  0;
}