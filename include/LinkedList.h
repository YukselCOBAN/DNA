#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct node
{ 
    string data;
    node* ileri;
    node* geri;

    node(string data,node* ileri,node* geri);
    

    
};

class LinkedList
{
   public:

   LinkedList();
    
   ~LinkedList(); 

   void ekle(string satir);

   int dugumSayisi(int satirNo);

   void Caprazlama(int satir1,int satir2);

   void Mutasyon(int satir,int sutun);

   node* SatirBul(int index);
   
   void degistir(int index,string satir);

   void ekranaYazdir();


   private:
   node* head;
   node* son;
   int boyut;


};











#endif