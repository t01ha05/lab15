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
    Movie() : yearReleased(0) {} // constructor initialized yearReleased to 0
   
    //setter for movie att.
    void setScreenWriter(const string& writer) {
        screenWriter = writer;
    }
    void setYearReleased(int year){
        yearReleased = year;
    }
    void setTitle(const string& t) {
        title = t;
    }
    //getters for movie attributes
    string getScreenwriter () const {
        return screenWriter;
    }
    int getYearReleased () const {
        return yearReleased;
    }
    string getTitle() const {
        return title;
    }
    //print movie details
    void print() const {
        cout << "Movie "<< screenWriter << endl;
        cout << "  Year released: " << yearReleased << endl;
        cout << "  Screenwriter: " << title << endl << endl;
    }
};

int main () {
    vector<Movie> movies; //vector ti store multiple movie
    ifstream inFile("input.txt"); //input file stream
    string title, screenWriter;
    int year;
    //check if file opens
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1; //return an error code 1 if failed to open
    }
    //read data from file
    while(getline (inFile, title)) {
        inFile >> year;
        inFile.ignore();
        getline(inFile, screenWriter);
        inFile.ignore(); //ignore newline to correctly read next title

        Movie temp;
        temp.setTitle(title);
        temp.setYearReleased(year);
        temp.setScreenWriter(screenWriter);
        movies.push_back(temp);
    } 
    inFile.close(); //close input file
   
    //output detail
    for(const Movie& movie : movies) {
        movie.print();
    }
    return 0;

}

