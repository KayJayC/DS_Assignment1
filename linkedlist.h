#ifndef LINKEDLIST_H
#define LINKEDLIST_H
//#include "array.h"


// Responsibilities: A data structure that can hold unlimited data
//                   the size of the data structure can grow and shrink
//                   dynamically as needed.

// Let's start with a structure holding double type of data.
class ListNode
{
  private:
  	    struct Node
        {
            CityInfo cityInfo;
            Node* next;
        };
        Node* head;

  public:
    ListNode();
    ~ListNode();

    void appendNode (CityInfo&);
    void appendNode (std::string, long double, long double);
    //void insertNode (CityInfo&);
    //void deleteNode (CityInfo&);
    void displayList() const;

   };


#endif