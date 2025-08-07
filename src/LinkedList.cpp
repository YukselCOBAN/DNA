/*
*@ file            :     LinkedList.cpp 
*@destription      :     LinkedList kaynak dosyası
*@course           :     1.öğretim C Grubu
*@assignment       :     1.ödev
*@date             :     27/11/2024
*@author           :     Yüksel Çoban    e-mail: yuksel.coban@gmail.com
*/

#include "LinkedList.h"
#include <iostream>
#include <cmath>
using namespace std;

node::node(string data,node* ileri=0,node* geri=0)
{
 this->data=data;
 this->ileri=ileri;
 this->geri=geri;
 
}
LinkedList::LinkedList()
{

    head=0;
    son=0;
    boyut=0;
}

LinkedList::~LinkedList()
{

   
    while(head!=0)
    {

        head->data=nullptr;
        head=head->ileri;

    }
    delete head;
 
}

void LinkedList:: ekle(string satir)
{

      node* newNode=new node(satir);
      if(head==nullptr)
      {
        head=newNode;
      }
      else{
        node*temp=head;
        while(temp->ileri!=nullptr)
        {
            temp=temp->ileri;
        }
        temp->ileri=newNode;
        
      }

       boyut++;
    
}


   int LinkedList::dugumSayisi(int satirNo)
   {

       return boyut;

   }

   node* LinkedList::SatirBul(int index)
   {
        if(index==0)
        {
           return head;
        }
        else if(index==boyut-1)
        {
           return son;
        }
        else{

            int i=0;

             for(node* itr=head ;itr!=0 ;itr=itr->ileri, i++)
             {
                 if(i==index)
                 {
                    return itr;
                 }
             } 
                 
        }
   
   }

   void LinkedList:: degistir(int index,string satir)
   {
      SatirBul(index)->data=satir;
   }
   
   void LinkedList::Caprazlama(int satir1,int satir2)
   {
       string kromozom1=SatirBul(satir1)->data;
       string kromozom2=SatirBul(satir2)->data;
       string yarim1=kromozom1.substr(0,(kromozom1.length()/2));
       string yarim2=kromozom1.substr(ceil(kromozom1.length()/2.0));
       string yarim3=kromozom2.substr(0,(kromozom2.length()/2));
       string yarim4=kromozom2.substr(ceil(kromozom2.length()/2.0));
    
       string yeniKromozom1=yarim1+yarim4;
       string yeniKromozom2=yarim2+yarim3;

       ekle(yeniKromozom1);
       ekle(yeniKromozom2);
   }


    void LinkedList::Mutasyon(int satir,int sutun)
   {

      string kromozom=SatirBul(satir)->data;
      kromozom[sutun]='X';
      degistir(satir,kromozom);

   }

   void LinkedList::ekranaYazdir()
   {
      char ilk;
     
      for(node* itr=head;itr!=0;itr=itr->ileri)
      {

        string satir=itr->data;
        ilk=satir[0];
        for(int k=satir.length()-1;k!=0;k--)
        {
            if(satir[k]<ilk)
            {
                ilk=satir[k];
                break;
            }
        }
        cout<<ilk<<' ';
      }
    cout<<endl;
   }
   

