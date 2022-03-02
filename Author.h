//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#ifndef UNTITLED13_AUTHOR_H
#define UNTITLED13_AUTHOR_H
#include <iostream>

using namespace std;
class Author {
    string name;
    string surname;
public:
    string getName();
    string getSurname();

    void setName(const string name);

    Author(const string name, const string surname);
};


#endif //UNTITLED13_AUTHOR_H
