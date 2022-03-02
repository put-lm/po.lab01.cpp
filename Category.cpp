//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#include "Category.h"

string Category::getName() {
    return name;
}

string Category::getDescription() {
    return description;
}

Category::Category(const string name, const string description): name(name), description(description) {}
