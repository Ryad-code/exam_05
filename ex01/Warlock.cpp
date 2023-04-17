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
//..................................//
void			Warlock::learnSpell(ASpell* obj)
{
	spells.push_back(obj);
}

void			Warlock::forgetSpell(std::string spell)
{
	std::vector<ASpell*>::iterator it2;
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell)
			it2 = it;
	}
	spells.erase(it2);
}

void			Warlock::launchSpell(std::string spell, ATarget& obj)
{
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
	{
		if ((*it)->getName() == spell)
			(*it)->launch(obj);
	}
}
