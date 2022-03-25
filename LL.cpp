#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){ //done
       hol=NULL;
       size=0;
}

LL::~LL(){
          //clear all nodes
          cout<<"destructor"<<endl;        

  }

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
          
                 /**
                 complete this part
                 */
                
     }
}
void LL::add_node(NODE *&new_node){//done

          hol->insert(new_node);// new_next->next=hol;
          hol=new_node;        

       size++;

 }
