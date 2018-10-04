#include <stdio.h>
#include <fstream>
#include <ios>
using namespace std;

void read_file(char * filename){

  //FILE * img = fopen(filename, "rb");
  ifstream ifs ("tmp.txt", ifstream::in);
  ofstream ofs ("tmp.txt", ofstream::binary);
  
  char c;
  int t = 0;
  bitset<8> letter_a (0x61);
  unsigned long my_i = letter_a.to_ulong();
  unsigned char ch = static_cast<unsigned char>(my_i);
  do{
  	
  	//c = fgetc(img);
  	c = ifs.get();
  	if(t == 3){// || t ==8 || t == 12){
  		//c = (c | 1);
  		//ofs.put(ch);

  	}
  	//printf("%c\n", c);
  	for (int i = 0; i < 8; ++i) {
    	printf("%u",(c >> i) & 1);
	}
	printf("\n");
  	t++;
  }while (!ifs.eof());
  
  ifs.close();
  ofs.close();
}