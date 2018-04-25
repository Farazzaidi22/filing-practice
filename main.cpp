#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream myfile;
  myfile.open("faraz.txt");

  myfile<<"i love dc comics";
  myfile.close();

  system("pause");
}