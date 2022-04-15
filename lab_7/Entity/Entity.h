//
// Created by 70000 on 4/7/2022.
//

#ifndef LAB_7_ENTITY_H
#define LAB_7_ENTITY_H

#include <iostream>

using namespace std;

class Entity{
private:
    char* type;
    int day;
    int sum;
public:
    Entity();
    Entity(char* n, int day, int s);
    Entity(const Entity &e);
    ~Entity();
    char* get_name();
    int get_day();
    int get_sum();
    char* to_String();
    void set_name(char* n);
    void set_day(int d);
    void set_sum(int s);
    Entity& operator=(const Entity &e);
    bool operator==(const Entity &e) const;
    friend istream& operator>>(istream& in, Entity& e);
    friend ostream& operator<<(ostream& out, Entity& e);
};



#endif //LAB_7_ENTITY_H
