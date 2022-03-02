//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#include "BookController.h"

Book* BookController::create(string authorName, string authorSurname, string categoryName, string categoryDescription) {
    Author *author = new Author(authorName, authorSurname);
    Category *category = new Category(categoryName, categoryDescription);
    Book *book = new Book(author, category);
    return book;
}

void BookController::remove(Book *book) {
    delete book;
}

void BookController::updateByValue(Book book, string title) {
    book.setTitle(title);
}

void BookController::updateByReference(Book &book, string title) {
    book.setTitle(title);
}
