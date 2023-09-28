#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "example.txt";

    // Writing to a file
    ofstream outputFile(filename);
    if (outputFile.is_open()) {
        outputFile << "Hello, World!" << endl;
        outputFile << "This is an example file." << endl;
        outputFile.close();
        cout << "File written successfully." << endl;
    } else {
        cout << "Unable to open the file." << endl;
    }

    // Reading from a file
    ifstream inputFile(filename);
    if (inputFile.is_open()) {
        string line;
        cout << "File contents: " << endl;
        while (getline(inputFile, line)) {
            cout << line << endl;
        }
        inputFile.close();
    } else {
        cout << "Unable to open the file." << endl;
    }

    return 0;
}