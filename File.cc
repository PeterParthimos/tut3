#include <iostream>
#include <string>
#include "Date.h"
#include "File.h"

using namespace std;

//Default Constructor
File::File() {
    name = "default";
    content = "default";
    date = Date();
}

//Constructor
File::File(const string& name, const string& content, Date& date) {
    this->name = name;
    this->content = content;
    this->date = date;
}

//Checks if file's date is less than the given files date
bool File::lessThan(File& otherFile) {
    return date.lessThan(otherFile.getDate());
}

//Prints file info
void File::print() {
    cout << "File: " << name << "\nLast Modified: " << date.getMonthName() << " " << date.getDay() << ", " << date.getYear() << endl;
}

//Prints file info + content
void File::printContents() {
    print();
    cout << "Content: " << content << endl;
}

//Getter for name
string File::getName() {
    return name;
}

//Getter for date
Date& File::getDate() {
    return date;
}
