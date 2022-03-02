//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#include "Author.h"

string Author::getName() {
    return name;
}

string Author::getSurname() {
    return surname;
}

Author::Author(const string name, const string surname): name(name), surname(surname) {}

void Author::setName(const string name) {
    Author::name = name;
}
