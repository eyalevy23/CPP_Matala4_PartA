#include "Character.hpp"
#include <string>
#include <iostream>
#include "Point.hpp"

namespace ariel{

    Character::Character(std::string name, Point location): name(name), location(location)
    {
        // this->name = name;
        // this->location = location;
        // this->damage = damage;
    }

    bool Character::isAlive()
    {
        return true;
    }

    double Character::distance(Point other)
    {
        return 0;
    }

    void Character::hit(int damageToCharacter)
    {

    }

    std::string Character::getName()
    {
        return this->name;
    }

    Point Character::getLocation()
    {
        return this->location;
    }

    int Character::getHealth()
    {
        return this->health;
    }

    void Character::print()
    {
        // cout << "Character: " << this->name << endl;
        // if(this->isAlive())
        // {
        //     cout << "Damage: " << this->damage << endl;
        // }
        // cout << "Location: " << this->location.getX() << ", " << this->location.getY() << endl;
        // cout << "(" << this->name  << ")" << endl;
        std::cout << " " << std::endl;

    }


    Cowboy::Cowboy(std::string name, Point location) : Character(name, location)
    {
        this->health = 110;
        this->bullets = 6;
    }

    void Cowboy::shoot(Character *other)
    {

    }

    bool Cowboy::hasBullets()
    {
        if(this->bullets > 0)
        {
            return true;
        } return false;
    }

    void Cowboy::reload()
    {
        this->bullets = 6;
    }

    std::string Cowboy::print()
    {
        return "";
    }

    Ninja::Ninja(std::string name, Point location) : Character(name, location)
    {
        this->health = 100;
        this->speed = 10;
    }

    void Ninja::move(Character *other)
    {

    }

    void Ninja::slash(Character *other)
    {

    }

    YoungNinja::YoungNinja(std::string name, Point location) : Ninja(name, location), health(100), speed(14)
    {

    }

    TrainedNinja::TrainedNinja(std::string name, Point location) : Ninja(name, location), health(100), speed(12)
    {
    
    }

    OldNinja::OldNinja(std::string name, Point location) : Ninja(name, location), health(150), speed(8)
    {

    }

        


}
