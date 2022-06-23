#include <Arduino.h>

class MyClass
{
private:
  int pin;  
public:
   MyClass(int pin);
   void init();
   void on();
   void off();
};
