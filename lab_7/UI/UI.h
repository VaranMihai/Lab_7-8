//
// Created by 70000 on 4/14/2022.
//

#ifndef LAB_7_UI_H
#define LAB_7_UI_H

#include "../Service/Service.h"

class UI {
private:
    Service service;

    void print_options();

public:

    UI(const Service &service);

    void read_entity(Entity e);

    void display_all_entities();

    void run_menu();
};


#endif //LAB_7_UI_H
