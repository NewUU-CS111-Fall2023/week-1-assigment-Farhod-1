/*
 * Author: Farxod Qarshiyev
 * Date: 17.10.2023
 * Name:
 */

#include <iostream>
#include "task_1.h"
using namespace std;

int main() {
    Country country("Uzbekistan", 34000000, 447400, "Tashkent", "Uzbek", "UZS");
    cout << "Name: " << country.getName() << endl;
    cout << "Population: " << country.getPopulation() << endl;
    cout << "Area: " << country.getArea() << endl;
    cout << "Capital: " << country.getCapital() << endl;
    cout << "Language: " << country.getLanguage() << endl;
    cout << "Currency: " << country.getCurrency() << endl;

    Region region("Tashkent", 3400000, 232343, 447400, "Tashkent", "Uzbek", "UZS", "Uzbekistan");

    cout << "Name: " << region.getName() << endl;
    cout << "Population: " << region.getPopulation() << endl;
    cout << "Annual income: " << region.getAnnualIncome() << endl;
    cout << "Area: " << region.getArea() << endl;
    cout << "Capital: " << region.getCapital() << endl;
    cout << "Language: " << region.getLanguage() << endl;
    cout << "Currency: " << region.getCurrency() << endl;
    cout << "Country: " << region.getCountry() << endl;


}
