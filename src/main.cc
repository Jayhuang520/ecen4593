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

class node{
private:
  int data;
  int DirtyBit;
  int ValidBit;
  unsigned long long tag;
public:
    node *link;
    node(){
      data = 0;
      DirtyBit = 0;
      ValidBit = 0;
      tag = 0;
      link = NULL;
    }
};

class LinkedList{
private:
  int MaxSize;
public:
  //MaxSize = 0;
  node *head = NULL;
  node *tail = NULL;
};



unsigned long long execute_time= 0;
unsigned long long read = 0;
unsigned long long write = 0;
unsigned long long inst = 0;

unsigned long long last_time = 0;
unsigned long long read_time = 0;
unsigned long long write_time = 0;
unsigned long long inst_time = 0;
unsigned long long tot_refs = 0;

unsigned long long L1i_req = 0;
unsigned long long L1i_hit = 0;
unsigned long long L1i_kickout = 0;
unsigned long long L1i_dkickout = 0;

unsigned long long L1d_req = 0;
unsigned long long L1d_hit = 0;
unsigned long long L1d_kickout = 0;
unsigned long long L1d_dkickout = 0;

unsigned long long L2_req = 0;
unsigned long long L2_hit = 0;
unsigned long long L2_kickout = 0;
unsigned long long L2_dkickout = 0;

int main(int argc, char ** argv) {

  Config params = Config(argc, argv);
  char op;
  unsigned long long int address;
  unsigned int bytesize;
  char cache[] = {'I','R','W'};
  int inst_type;

  Data data = simulator(params);

  while(scanf("%c %Lx %d\n",&op,&address,&bytesize)==3){
      if(op == 'I')
      inst_type = 0;
      else if(op == 'R')
      inst_type = 1);
      else if(op == 'W')
      inst_type = 2;

  }


  output(params, data);

  return 0;
}
