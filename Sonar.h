#ifndef SONAR_H
#define SONAR_H
#include <Arduino.h>
class Sonar{
  public:
	Sonar(int echo, int trig);
  	void begin();
    float distance(float value);
  private:
	int dur();
    int trig, echo;
    const float _CM = 58.47;
    const float _IN = 2.54 * 58.47;
    #define CM 0
    #define IN 1
};
#endif
