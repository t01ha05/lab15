#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Movie {
private:
    string screenWriter;
    int yearReleased;
    string title;
public:
    Movie() : yearReleased(0) {}

    void setScreenWriter(const string& writer){
        screenWriter = writer;
    }
    void setYearReleased(int year){
        yearReleased = year;
    }
    void setTitle(const string& t) {
        title = t;
    }
    string getScreenwriter () const {
        return screenWriter;
    }
    int getYearReleased () const {
        return yearReleased;
    }
    string getTitle() const {
        return title;
    }
    void print() const {
        cout << "Movie "<< title << endl;
        cout << "  Year released: " << yearReleased << endl;
        cout << "  Screenwriter: " << screenWriter << endl << endl;
    }
};

