
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

// Function prototype 
string generateAcronym(const string& line) {
    string acronym = ""; 

    for (size_t i = 0; i < line.length(); i++) {
        // Check if the current character is the first character of a word
        if ((i == 0 || line[i - 1] == ' ') && (line[i] >= 'A' && line[i] <= 'Z' || line[i] >= 'a' && line[i] <= 'z')) {
            // Convert to uppercase if it's lowercase and add to acronym
            acronym += (line[i] >= 'a' && line[i] <= 'z') ? (line[i] - 'a' + 'A') : line[i];
        }
    }

    return acronym; // Return acronym
}

int main() {
    // Declare variables
    string line;
    ifstream inputFile("acronym.dat"); // Open the data file

    // open data file and error if it dosent open 
    assert(inputFile.is_open() && "Error: Unable to open file acronym.dat");

    // use while loop to read lines one line at a time
    while (getline(inputFile, line)) {
        string acronym = generateAcronym(line); // Cfor each line, convert it to the corresponding acronym
        
        // display the result for that line
        cout << line << " --> " << acronym << endl; 
    }

    // Close data file 
    inputFile.close();

    return 0;
}
