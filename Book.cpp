//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#include "Book.h"

Book::Book(Author *author, Category *category) : author(author),
                                                                      category(category) {}

Book::~Book() {
    delete author;
    delete category;
}

Author *Book::getAuthor() {
    return author;
}

Category *Book::getCategory() {
    return category;
}

string Book::getTitle() {
    return title;
}

void Book::setTitle(const string title) {
    this->title = title;
}
