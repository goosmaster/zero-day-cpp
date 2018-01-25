#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;

  cout << "What is your name?" << endl;
  getline(cin, name);
  cout << "Hello " << name << "!" << endl;
}
