#include "Team.hpp"
#include "Character.hpp"
#include <iostream>
#include <string>


using namespace std;
namespace ariel
{

    // copy constructor
    Team::Team(Team &) {}
    // copy assignment operator
    Team &Team::operator=(const Team &_otherTeam) noexcept 
    {
        return *this;
    }
    // move constructor
    Team::Team(Team &&_otherTeam) noexcept {}
    // move assignment operator
    Team &Team::operator=(Team &&_otherTeam) noexcept 
    {
        return _otherTeam = *this;
    }

    // destructor
    Team::~Team()
    {
        
    }
    Team::Team(Character *leader) : leader(leader)
    {
    }

    void Team::add(Character* character)
    {

    }
    void Team::attack(Team* team)
    {

    }
    int Team::stillAlive()
    {
        return 0;
    }
    void Team::print()
    {

    }

    int Team::getTeamSize()
    {
        return 0;
    }

    std::string Team::getTeamName()
    {
        return "";
    }

    std::string Team::getTeamLeaderName()
    {
        return "";
    }
}