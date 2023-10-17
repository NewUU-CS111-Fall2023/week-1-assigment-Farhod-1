#include <bits/stdc++.h>
using namespace std;

class QuadraticEquation
{
public:
    double a, b, c;
public:
    QuadraticEquation(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    double getA() {
        return a;
    }

    double getB() {
        return b;
    }

    double getC() {
        return c;
    }

    double getDiscriminant() {
        return b * b - 4 * a * c;
    }

    double getRoot1() {
        if (getDiscriminant() < 0) {
            return 0;
        }
        return (-b + sqrt(getDiscriminant())) / (2 * a);
    }

    double getRoot2() {
        if (getDiscriminant() < 0) {
            return 0;
        }
        return (-b - sqrt(getDiscriminant())) / (2 * a);
    }
};

class HalfQuadraticEquation : public QuadraticEquation
{
public:
    HalfQuadraticEquation(double a, double b) : QuadraticEquation(a, b, 0) {}

    double getRoot() {
        return -getB() / getA();
    }

    double getDiscriminant() {
        return 0;
    }

    double getRoot1() {
        return getRoot();
    }

    double getRoot2() {
        return getRoot();
    }

    double getA() {
        return QuadraticEquation::getA();
    }

    double getB() {
        return QuadraticEquation::getB();
    }

    double getC() {
        return QuadraticEquation::getC();
    }

    void setA(double a) {
        QuadraticEquation::a = a;
    }

    void setB(double b) {
        QuadraticEquation::b = b;
    }
};