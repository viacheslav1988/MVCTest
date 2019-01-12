
#include "pch.h"
#include "ConsoleView.h"

ConsoleView::ConsoleView(TemperatureModel* model)
{
	_model = model;
	_model->addObserver(this);
}

ConsoleView::~ConsoleView() { }

void ConsoleView::update()
{
	system("cls");
	std::cout << "Temperature in Celsius: " << _model->getC() << std::endl;
	std::cout << "Temperature in Farenheit: " << _model->getF() << std::endl;
	std::cout << "Input temperature in Celsius: ";
}