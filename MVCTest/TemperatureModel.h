#pragma once
#include "Observable.h"

class TemperatureModel : public Observable
{
	float _temperatureF;
public:
	TemperatureModel(float tempF);
	~TemperatureModel();
	float getF();
	float getC();
	void setF(float tempF);
	void setC(float tempC);
};