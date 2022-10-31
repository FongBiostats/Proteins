#include <iostream>
using namespace std;

class Car{
    public:
    string protein;
    string abbreviation;
    string group;
    string formula;

};

int main()
{
    Car carobj1;
    carobj1.protein = "Glycine";
    carobj1.abbreviation = "gly,G";
    carobj1.group = "Hydrophobic Group";
    carobj1.formula = "C2H5NO2";

    cout << carobj1.protein << " " << carobj1.abbreviation << " " << carobj1.group << " " << carobj1.formula << " " << "\n";

    return 0;
}