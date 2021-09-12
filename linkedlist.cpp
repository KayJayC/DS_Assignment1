#include <iostream>
#include "linkedlist.h"
#include "array.h"

//creates linked list
void ListNode:: appendNode( CityInfo& inputData)
{
    ListNode *newNode; //goes to the new node
    ListNode *nodePtr; // move through the list

    //ALlocate a new node 
    newNode = new ListNode;
    newNode -> cityInfo = inputData;
    newNode -> next = nullptr;

    if (!head)//empty node list
        head = newNode;
        newNode->next = nullptr;
    else//node has stuff
    {
        nodePtr = head;

        while (nodePtr -> next)
            nodePtr = nodePtr->next;
        nodePtr-> next = newNode;//make last node point to new node
    }
}

//add objects to linked list
void ListNode::appendNode(string name, double lat, double longit){
    //make new node on heap
    ListNode *newNode; //goes to the new node
    ListNode *nodePtr; // move through the list

    //ALlocate a new node and store objects there
    newNode->cityInfo->cityName(name);
    newNode->cityInfo->latitude(lat);
    newNode->cityInfo->longitude(longit);
    newNode->next = nullptr;
    
    if(!head){
        head = newNode;
        newNode->next = nullptr;
        cout << "First node\n";
    }
    //something already in node list
    else{
        //go to the end of current node list
        //do this by traversing down the linked list
        traverse = head;
        while(traverse->next){
            traverse = traverse->next;
        }
        //make last next node that is not pointing to anything point to this new node
        traverse->next = newNode;
        cout << "appended new node\n";
        
    }
}

void ListNode::displayList const() //this is the part that actually displays the program
{
    Node *newNode;
    std::string cityName;
    long double lat, longi;
    
    else
    {
        newNode = head;
        while(newNode->next)
        {
            cityName= newNode->cityInfo->cityName(name);
            lat = newNode->cityInfo->latitude(lat);
            longi = newNode->cityInfo->longitude(longit);
            cout << cityName << " " << lat << " " << longi << " \n";
            traverse = traverse->next;
        }

    }
}