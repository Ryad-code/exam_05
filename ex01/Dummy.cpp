#include "Dummy.hpp"

Dummy::Dummy(void)
{
	type = "Target Practice Dummy";
}

Dummy::~Dummy(void) {}

ATarget*	Dummy::clone(void) const
{
	return (new Dummy());
}
