#pragma once
#include <string>
class Object
{
private:
public:
	virtual bool equal(Object*) = 0;
	virtual std::string toString() = 0;

};