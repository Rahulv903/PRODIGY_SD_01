#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5/9;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin * 9/5) - 459.67;
}

int main() {
    double temperature;
    string originalUnit;

    cout << "Enter temperature value: ";
    cin >> temperature;

    cout << "Enter original unit (Celsius, Fahrenheit, or Kelvin): ";
    cin >> originalUnit;

    if (originalUnit == "Celsius" || originalUnit == "celsius") {
        double fahrenheit = celsiusToFahrenheit(temperature);
        double kelvin = celsiusToKelvin(temperature);
        cout << temperature << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit and " << kelvin << " Kelvin." << endl;
    } else if (originalUnit == "Fahrenheit" || originalUnit == "fahrenheit") {
        double celsius = fahrenheitToCelsius(temperature);
        double kelvin = fahrenheitToKelvin(temperature);
        cout << temperature << " degrees Fahrenheit is " << celsius << " degrees Celsius and " << kelvin << " Kelvin." << endl;
    } else if (originalUnit == "Kelvin" || originalUnit == "kelvin") {
        double celsius = kelvinToCelsius(temperature);
        double fahrenheit = kelvinToFahrenheit(temperature);
        cout << temperature << " Kelvin is " << celsius << " degrees Celsius and " << fahrenheit << " degrees Fahrenheit." << endl;
    } else {
        cout << "Invalid input for unit. Please enter Celsius, Fahrenheit, or Kelvin." << endl;
    }

    return 0;
}
