#pragma once

#include <iostream>
#include "TemperatureModel.h"
#include "Observer.h"

class ConsoleView : public Observer
{
	TemperatureModel *_model;
public:
	ConsoleView(TemperatureModel* model);
	~ConsoleView();
	virtual void update();
};