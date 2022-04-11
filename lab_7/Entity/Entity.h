//
// Created by 70000 on 4/7/2022.
//

#ifndef LAB_7_ENTITY_H
#define LAB_7_ENTITY_H

#include <iostream>

using namespace std;

class Entity{
private:
    char* name;
public:
    Entity();
    Entity(char* n);
    Entity(const Entity &e);
    ~Entity();
    char* get_name();
    char* to_String();
    void set_name(char* n);
    Entity& operator=(const Entity &e);
    bool operator==(const Entity &e) const;
    friend istream& operator>>(istream& in, Entity& e);
    friend ostream& operator<<(ostream& out, Entity& e);
};



#endif //LAB_7_ENTITY_H
