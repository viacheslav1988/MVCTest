#pragma once

#include <vector>
#include "Observer.h"

class Observable
{
	std::vector<Observer*> _observers;
public:
	Observable();
	~Observable();
	void addObserver(Observer*);
	void notifyUpdate();
};