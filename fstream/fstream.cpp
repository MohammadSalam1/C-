#include <iostream>;
#include <fstream>;
#include <string>;
using namespace std;

int main(){
//write (create or overwrite)
  ofstream file("output.txt"); //creates or opens file

  file << "hello world" << endl;

  file.close();

//read file
  ifstream lol("output.txt");
  string line;

  while (getline(lol, line)) {
    cout << line << endl;
  }
  lol.close();

  if (!file.is_open()) {
    cout << "Error: Could not open the file." << endl;
    return 1;
  }



  return 0;
}