#include <stdio.h>
#include <fstream>
#include <ios>
using namespace std;

void read_file(char * filename){

  FILE * img = fopen(filename, "rb");
  ifstream ifs (filename, ifstream::binary);
  ofstream ofs (filename, ofstream::binary);
  
  char c;
  int i = 0;
  do{
  	
  	//c = fgetc(img);
  	c = ifs.get();
  	if(i == 4 || i ==8 || i == 12){
  		c = (c | 1);
  		//ofs.put(c);

  	}
  	//printf("%c\n", c);
  	for (int i = 0; i < 8; ++i) {
    	printf("%u",(c >> i) & 1);
	}
	printf("\n");
  
  }while (!ifs.eof());
  
  ifs.close();
  ofs.close();
}