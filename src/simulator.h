#ifndef CONFIG_H
#define CONFIG_H
#include "config.h"
#endif

/*class Data {
  public:
    int Reads;
    int Writes;
    int Instructions;
}
*/


class Node{
private:
  bool _dirty;
  unsigned long long int _address;
  Node *next;
  Node *prev;

public:
    Node();
    Node(unsigned long long int Address);

    void setNext(Node *Next);
    Node* getNext();
    void setPrev(Node *Prev);
    Node* getPrev();
    unsigned longlong getAdd();
    void setAddress(unsigned long long int ADDRESS);
    void setDirty(bool DIRTY);
    bool getDirty();
};

class DoulyLinkedList{
private:
  Node *head;
  Node *tail;
  unsigned int Length;
  unsigned int MaxSize;

public:
    DoublyLinkedList();
    DoublyLinkedList(unsigned int Max);
    ~DoublyLinkedList();
    void moveToHead(Node * usedNode);
    void addNode(unsigned long long int ADDRESS);
    bool isEmpty();
    bool isFull();
    Node* findNode(unsigned long long int ADDRESS);
    void cutNode(Node * cutMe);
    void pasteNode(Node * pasteMe);
    void deleteNode(Node * deleteMe);
    Node* getHead();
    Node* getTail();
};


  struct L1_Data_config{
  }

Data simulator(Config params);

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
