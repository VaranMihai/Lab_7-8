//
// Created by 70000 on 4/14/2022.
//

#include "UI.h"


void UI::print_options() {
    std::cout << "Option 1" << endl;
}

/*
UI::UI(const Service &service) {
    this->service = service;
}
 */

void UI::read_entity(Entity e) {
    service.add_entity(e);
}

void UI::display_all_entities() {
    service.get_all_entities();
}

void UI::run_menu() {

    print_options();
}

