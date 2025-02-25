#ifndef WIRE_H
#define WIRE_H
//#include "AC.h"
#include <string>
using namespace std;

class AC;
class Wire
{
private:
    float m_length;
    float m_thickness;
    float m_price;
    string m_colour;
    string m_brand;
    AC* m_ac;

public:
    Wire(float length, float thickness, float price, string colour, string brand);
    void setAC(AC* ac);
    void turnOnWire();
    void turnOFFWire();
    ~Wire();
};

#endif // WIRE_H
