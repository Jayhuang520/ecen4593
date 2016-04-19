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
  int dirty;
  unsigned long long int address;
  Node *next;
  Node *prev;

public:

    Node(unsigned long long int Address);

    void setNext(Node *Next);
    Node* getNext();


    void setPrev(Node *Prev);
    Node* getPrev();
    unsigned longlong getAdd();
    void setAddress(unsigned long long int Address);
    void setDirty(int DIRTY);
    int getDirty();
};

Node::Node(unsigned long long int Address){
  prev = 0;
  next = 0;
  dirty = 0;
  address = Address;
};

void Node::setNext(Node *Next){
  next = Next;
};
Node* Node::getNext(){
  return next;
};


void Node::setPrev(Node *Prev){
  prev = Prev;
};

Node* Node::getPrev(){
  return Prev;
};

unsigned longlong int Node::getAdd(){
      return Address;
};

void setDirty(int DIRTY){
  dirty = DIRTY;
};
int getDirty(){
  return dirty;
};


class DoublyLinkedList{
private:
  Node *head;
  Node *tail;
  unsigned int Length;
  unsigned int MaxSize;

public:
    DoublyLinkedList(unsigned int maxsize);
    ~DoublyLinkedList();
    void MoveHead(Node * oldNode);
    void AddNode(unsigned long long int Address);
    bool isEmpty();
    bool isFull();
    Node* findNode(unsigned long long int Address);
    void cutNode(Node * cutMe);
    void pasteNode(Node * pasteMe);
    void deleteNode(Node * deleteMe);
    Node* getHead();
    Node* getTail();
};

DoublyLinkedList::DoublyLinkedList(unsigned int maxsize){
  maxsize = 0;
  head = 0;
  tail = 0;
};

DoublyLinkedList::~DoublyLinkedList(){
    Node *curr;
    Node *temp;
    curr = head;
    while(curr!=NULL){
      temp = curr->getNext;
      delete curr;
      curr = temp;
    }
};

void DoublyLinkedList::MoveHead(Node* oldNode){
  
};

void DoublyLinkedList::AddNode(unsigned long long int Address)

bool Node::isEmpty(){

}

  //struct L1_Data_config{
  //};

//Data simulator(Config params);

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
