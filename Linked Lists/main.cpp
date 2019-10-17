/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nick2
 *
 * Created on October 9, 2019, 3:49 PM
 */

//System Libraries
#include <cstdlib>   //Random Function cstdlib
#include <iostream> //I/O Stream iostream
#include <ctime>     //Time Function setting random seed ctime
using namespace std;

//User Libraries
#include "Node.h"

//Global Constants
//Physics/Math/Conversions/2+ArrayDimenstions
//No Global Variables

//Function Prototypes Here
Node *filNode(int);
void prtNode(Node *);
void destroy(Node *);

//Execution Begins with Main
int main(int argc, char** argv) {
    //Random Number seed set once here
    srand(static_cast<unsigned int>(time(0)));
  
    //Declare and initialize variables
    Node *head=filNode(10);
  
    //Display results here
    prtNode(head);
  
    //Clean up code
    destroy(head);
  
    //Exit stage right
    return 0;
}

Node *filNode(int n){
    //Initialize the front
    Node *head=new Node;
    head->data=n--;
    head->ptr=NULL;
    Node *tail=head;
    //Loop until filled
    do{
        Node *next=new Node;
        next->data=n--;
        next->ptr=NULL;
        tail->ptr=next;
        tail=next;
    }while(n>=0);
    return head;
}

void prtNode(Node *head){
    Node *temp=head;
    do{
        cout<<temp->data<<endl;
        temp=temp->ptr;
    }while(temp!=NULL);
}

void destroy(Node *head){
    Node *temp=head;
    do{
        temp=temp->ptr;
        delete head;
        head=temp;
    }while(temp!=NULL);
}

