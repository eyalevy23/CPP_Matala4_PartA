#ifndef CHARACTER_H
#define CHARACTER_H

#include "Point.hpp"
#include <string>

namespace ariel{
    class Character
    {
        public:
            Character(std::string name, Point location);
            bool isAlive();
            double distance(Point other);
            void hit(int damageToCharacter);
            std::string getName();
            Point getLocation();
            void print();
            int getHealth();


        private:
            std::string name;
            Point location;
            int health;
    };

    class Cowboy : public Character
    {
        int health;
        int bullets;
        public:
            Cowboy(std::string name, Point location);
            void shoot(Character *other);
            bool hasBullets();
            void reload();
            std::string print();
    };

    class Ninja : public Character
    {
        int health;
        int speed;
        public:
            Ninja(std::string name, Point location);
            void move(Character *other);
            void slash(Character *other);
            
    };

    class YoungNinja : public Ninja
    {
        int health;
        int speed;
        public:
            YoungNinja(std::string name, Point location);
    };

    class TrainedNinja : public Ninja
    {
        int health;
        int speed;
        public:
            TrainedNinja(std::string name, Point location);
    };

    class OldNinja : public Ninja
    {
        int health;
        int speed;
        public:
            OldNinja(std::string name, Point location);
    };
}
#endif
