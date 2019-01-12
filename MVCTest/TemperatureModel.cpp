#include "pch.h"
#include "TemperatureModel.h"

TemperatureModel::TemperatureModel(float tempF)
	: _temperatureF(tempF) { }


TemperatureModel::~TemperatureModel() { }

float TemperatureModel::getF()
{
	return _temperatureF;
}

float TemperatureModel::getC()
{
	return (_temperatureF - 32.0f) * 5.0f / 9.0f;
}

void TemperatureModel::setF(float tempF)
{
	_temperatureF = tempF;
	notifyUpdate();
}

void TemperatureModel::setC(float tempC)
{
	_temperatureF = tempC * 9.0f / 5.0f + 32.0f;
	notifyUpdate();
}