#include <iostream>
using namespace std;    // because I'm lazy and want to avoid saying std:: all over the place`

#include <cstdio>       // for printf

int main(int argc, char ** argv)
{
  cout << "cout: argc = " << argc << endl;
  for(int i = 0; i < argc; i++)
     cout << "cout: argv[" << i << "] ==>" << argv[i] << "<==\n";

  printf("printf: argc = %d\n", argc );
  for(int i = 0; i < argc; i++)
     printf("printf: argv[%d] ==>%s<==\n", i, argv[i]);
}
