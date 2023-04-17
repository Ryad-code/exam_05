#include "Warlock.hpp"

Warlock::Warlock(std::string _name, std::string _title)
{
	name = _name;
	title = _title;
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(void)
{
	std::cout << name << ": My job here is done!\n";
}

const std::string&	Warlock::getName(void) const
{
	return name;
}

const std::string&	Warlock::getTitle(void) const
{
	return title;
}

void			Warlock::setTitle(const std::string &_title)
{
	title = _title;
}

void			Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}
