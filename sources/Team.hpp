#ifndef TEAM_H
#define TEAM_H

#include "Character.hpp"
#include <iostream>
#include <string>

namespace ariel{
    class Team
    {
        private:
            Character *leader;

        public:

            Team(Character *leader);//declare default constructor
            ~Team();//declare destructor
            void add(Character *leader);
            void attack(Team *team);
            int stillAlive();
            int getTeamSize();
            std::string getTeamName();
            std::string getTeamLeaderName();
            Character getCharacter();
            void print();

            // copy constructor
            Team(Team &);
            // copy assignment operator
            Team &operator=(const Team &) noexcept;
            // move constructor
            Team(Team &&) noexcept;
            // move assignment operator
            Team &operator=(Team &&) noexcept;
    };
}

#endif