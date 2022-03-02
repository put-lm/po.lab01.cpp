#include <iostream>
#include "BookController.h"

using namespace std;
void showBook(Book *book);

int main() {
    BookController *controller = new BookController();
    Book *book = controller->create("J.K.", "Rowling", "Fantasy", "Gatunek literacki lub filmowy używający magicznych i innych nadprzyrodzonych form.");
    showBook(book);
    controller->updateByReference(*book, "Harry Potter i Kamień Filozoficzny");
    showBook(book);
    //    !!! Problem znajduje się tutaj - odkomentuj i zbadaj dlaczego nie działa
    //    controller->updateByValue(*book, "Harry Potter i Komnata Tajemnic");
    //    showBook(book);
    controller->remove(book);
    return 0;

}

void showAuthor(Author *author) {
    cout <<"Autor: "<< author->getName() << " "<< author->getSurname() << endl;
}

void showCategory(Category *category) {
    cout <<"Kategoria: " << category->getName() << category->getDescription() << endl;
}

void showBook(Book *book) {
    cout << "----------------------------------" << endl;
    cout << "Tytuł: \"" << book->getTitle() <<"\"" << endl;
    showAuthor(book->getAuthor());
    showCategory(book->getCategory());
    cout << "----------------------------------" << endl << endl;
}

