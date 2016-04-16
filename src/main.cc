#define DEBUG

#ifdef DEBUG
#include <iostream>
using namespace std;
#endif

#ifndef CONFIG_H
#define CONFIG_H
#include "config.h"
#endif


#ifndef SIMULATOR_H
#define SIMULATOR_H
#include "simulator.h"
#endif

#include "output.h"



int main(int argc, char ** argv) {

  Config params = Config(argc, argv);
  char op;
  unsigned long long int address;
  unsigned long long int temp_address;
  unsigned long long int refAddress;
  unsigned int bytesize;
  unsigned long long int end_address;
  unsigned long long L1tag;
  unsigned long L1index;
  unsigned long long L2tag;
  unsigned long L2index;




  Data data = simulator(params);

  while(scanf("%c %Lx %d\n",&op,&address,&bytesize)==3){
      switch(op){
        case 'I':
          inst++;
          break;
        case 'R':
          read++;
          break;
        case 'W':
          write++;
          break;
      }

      end_address = address + (bytesize-1);
      temp_address = address & ~(0x3);

      do{
        temp_address = temp_address + 4;

        switch(op){
          case 'I':
//---------------------------------Important--------------------------//

          //idea: read from each config file,it will tells how many bits needed to
          //shift to read out the index bits and the tag bits
          //Tag shift
            L1tag = temp_address >> L1config.tagShift;
            L1index = 

          case 'R':
            //call L1_d read function
            L1tag =


          case 'W':




        }



      }while(temp_address<end_address)


  }





  output(params, data);

  return 0;
}
