#include <iostream>
using namespace std;

class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
};

class KidUsers : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() {
        if (age < 12)
            cout << "You have successfully registered under a Kids Account\n";
        else
            cout << "Sorry, Age must be less than 12 to register as a kid\n";
    }

    void requestBook() {
        if (bookType == "Kids")
            cout << "Book Issued successfully, please return the book within 10 days\n";
        else
            cout << "Oops, you are allowed to take only kids books\n";
    }
};

class AdultUser : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() {
        if (age > 12)
            cout << "You have successfully registered under an Adult Account\n";
        else
            cout << "Sorry, Age must be greater than 12 to register as an adult\n";
    }

    void requestBook() {
        if (bookType == "Fiction")
            cout << "Book Issued successfully, please return the book within 7 days\n";
        else
            cout << "Oops, you are allowed to take only adult Fiction books\n";
    }
};

int main() {
    KidUsers k;
    k.age = 10;
    k.registerAccount();
    k.bookType = "Kids";
    k.requestBook();

    AdultUser a;
    a.age = 23;
    a.registerAccount();
    a.bookType = "Fiction";
    a.requestBook();

    return 0;
}