//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#ifndef UNTITLED13_BOOKCONTROLLER_H
#define UNTITLED13_BOOKCONTROLLER_H


#include "Book.h"

class BookController {
public:
    Book* create(string authorName, string authorSurname, string categoryName, string categoryDescription);
    void updateByValue(Book book, string title);
    void updateByReference(Book &book,  string title);
    void remove(Book *book);
};


#endif //UNTITLED13_BOOKCONTROLLER_H
