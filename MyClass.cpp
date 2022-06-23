#include "MyClass.h"

MyClass::MyClass(int pin)
{
    this->pin = pin;
    init();
}

void MyClass::init()
{
    pinMode(pin, OUTPUT);
    off();
}

void MyClass::on()
{    
    digitalWrite(pin, HIGH);
}

void MyClass::off()
{    
    digitalWrite(pin, LOW);
}
