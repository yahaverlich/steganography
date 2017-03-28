#include <stdio.h>

int main(int argc, char * argv[]){

  char * filename = argv[1];
  read_file(filename);
}

void read_file(char * filename){

  FILE * img = fopen(filename, "r");
}
