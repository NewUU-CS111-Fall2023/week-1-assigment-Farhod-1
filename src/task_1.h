/*
 * Author:
 * Date:
 * Name:
 */

using namespace std;

class Country {
private:
    string name;
    int population;
    int area;
    string capital;
    string language;
    string currency;
public:
    Country(string name, int population, int area, string capital, string language, string currency) {
        this->name = name;
        this->population = population;
        this->area = area;
        this->capital = capital;
        this->language = language;
        this->currency = currency;
    }

    void setName(string name) {
        this->name = name;
    }

    void setPopulation(int population) {
        this->population = population;
    }

    void setArea(int area) {
        this->area = area;
    }

    void setCapital(string capital) {
        this->capital = capital;
    }

    void setLanguage(string language) {
        this->language = language;
    }

    void setCurrency(string currency) {
        this->currency = currency;
    }

    string getName() {
        return name;
    }

    int getPopulation() {
        return population;
    }

    int getArea() {
        return area;
    }

    string getCapital() {
        return capital;
    }

    string getLanguage() {
        return language;
    }

    string getCurrency() {
        return currency;
    }

    void print() {
        cout << "Name: " << name << endl;
        cout << "Population: " << population << endl;
        cout << "Area: " << area << endl;
        cout << "Capital: " << capital << endl;
        cout << "Language: " << language << endl;
        cout << "Currency: " << currency << endl;
    }

    void printName() {
        cout << "Name: " << name << endl;
    }

    void printPopulation() {
        cout << "Population: " << population << endl;
    }

    void printArea() {
        cout << "Area: " << area << endl;
    }
};

class Region: public Country {
private:
    string name;
    int population;
    int area;
    int annualIncome;
    string capital;
    string language;
    string currency;
    string country;

public:
Region(string name, int population, int annualIncome, int area, string capital, string language, string currency, string country) : Country(name, population, area, capital, language, currency) {
        this->name = name;
        this->population = population;
        this->annualIncome = annualIncome;
        this->area = area;
        this->capital = capital;
        this->language = language;
        this->currency = currency;
        this->country = country;
    }

    void setName(string name) {
        this->name = name;
    }

    void setPopulation(int population) {
        this->population = population;
    }
    void setAnnualIncome(int annualIncome) {
        this->annualIncome = annualIncome;
    }

    void setArea(int area) {
        this->area = area;
    }

    void setCapital(string capital) {
        this->capital = capital;
    }

    void setLanguage(string language) {
        this->language = language;
    }

    void setCurrency(string currency) {
        this->currency = currency;
    }

    void setCountry(string country) {
        this->country = country;
    }

    string getName() {
        return name;
    }

    int getPopulation() {
        return population;
    }

    int getAnnualIncome() {
        return annualIncome;
    }

    int getArea() {
        return area;
    }

    string getCapital() {
        return capital;
    }

    string getLanguage() {
        return language;
    }

    string getCurrency() {
        return currency;
    }

    string getCountry() {
        return country;
    }

    void print() {
        cout << "Name: " << name << endl;
        cout << "Population: " << population << endl;
        cout << "Area: " << area << endl;
        cout << "Capital: " << capital << endl;
        cout << "Language: " << language << endl;
        cout << "Currency: " << currency << endl;
        cout << "Country: " << country << endl;
    }

    void printName() {
        cout << "Name: " << name << endl;
    }

    void printPopulation() {
        cout << "Population: " << population << endl;
    }

    void printArea() {
        cout << "Area: " << area << endl;
    }
};


};


