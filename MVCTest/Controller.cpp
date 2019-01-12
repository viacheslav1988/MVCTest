#include "pch.h"
#include "Controller.h"

Controller::Controller(TemperatureModel* model)
{
	_model = model;
}

Controller::~Controller() { }

void Controller::start()
{
	_model->setC(0);

	float temp;
	do
	{
		std::cin >> temp;
		_model->setC(temp);
	} while (temp != 0);
}