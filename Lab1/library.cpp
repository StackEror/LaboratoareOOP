#include <iostream>
#include "library.h"
using namespace std;  

void Library::Add_book_to_library(Book &book)
{
    cout << "Book"   << " '"  << book.name  << "' " << "added to library"<< endl;
    library.emplace_back(book);
}

void Library::Remove_book_from_library(Book &book)
{
    cout << "Book"   << " '"  << book.name  << "' " << "removed from library"<< endl;
    library.pop_back();
}

    // cout << "All books are" << endl;
void Library::Print_all_books()
{
    cout << endl;
    for(auto i = library.begin(); i  != library.end(); i++)
    {
        cout << i->name << endl;
        i->print_book(*i);
        cout << endl;
    }
}
int Library::Get_nr_of_books()
{
    return library.size();
}

