//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#ifndef UNTITLED13_BOOK_H
#define UNTITLED13_BOOK_H
#include <iostream>
#include "Author.h"
#include "Category.h"

using namespace std;
class Book {
    string title = "Prace nad tytułem nadal trwają";
    Author *author;
    Category *category;
public:
    string getTitle();
    Author *getAuthor();
    Category *getCategory();

    void setTitle(const string title);

    Book(Author *author, Category *category);
    virtual ~Book();
};

#endif //UNTITLED13_BOOK_H
