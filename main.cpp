#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream myfile;
  myfile.open("faraz.txt");

  if(myfile.is_open())
  {
    cout<<"File object is associated with a file"<< endl;
  }

  else
  {
    cout<<"File object is not associated with a file" << endl;
  }

  myfile<<"i love dc comics";
  myfile.close();
  
  system("pause");
}