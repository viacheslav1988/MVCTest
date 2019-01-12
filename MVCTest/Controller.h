#pragma once

#include <iostream>
#include "TemperatureModel.h"

class Controller
{
	TemperatureModel* _model;
public:
	Controller(TemperatureModel*);
	~Controller();
	void start();
};