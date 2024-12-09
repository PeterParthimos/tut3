#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class File {
    private:
        string name;
        string content;
        Date date;
    public:
        File();
        File(const string&, const string&, Date&);
        bool lessThan(File&);
        void print();
        void printContents();
        string getName();
        Date& getDate();
};

#endif
