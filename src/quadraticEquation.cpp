
#include <bits/stdc++.h>
#include "quadratic.h"
using namespace std;

int main() {
    QuadraticEquation quadraticEquation(1, 2, 1);
    cout << "Discriminant: " << quadraticEquation.getDiscriminant() << endl;
    cout << "Root1: " << quadraticEquation.getRoot1() << endl;
    cout << "Root2: " << quadraticEquation.getRoot2() << endl;

    HalfQuadraticEquation halfQuadraticEquation(1, 2);
    cout << "Discriminant: " << halfQuadraticEquation.getDiscriminant() << endl;
    cout << "Root: " << halfQuadraticEquation.getRoot() << endl;
    cout << "Root1: " << halfQuadraticEquation.getRoot1() << endl;
    cout << "Root2: " << halfQuadraticEquation.getRoot2() << endl;
}


