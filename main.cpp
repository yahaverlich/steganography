#include <stdio.h>
#include "read_file.cpp"

int main(int argc, char * argv[]){

  char * filename = argv[1];
  read_file(filename);
}

