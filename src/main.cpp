//@ file            :     main.cpp 
//@destription      :     main kaynak dosyası
//@course           :     1.öğretim C Grubu
//@assignment       :     1.ödev
//@date             :     27/11/2024
//@author           :     Yüksel Çoban      e-mail: yuksel.coban@gmail.com


#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

#include "LinkedList.h"


void otomatikIslem(LinkedList *liste)
{
   string satir;
   ifstream islemler("islemler.txt");
   while(getline(islemler,satir))
   {

    int index1,index2;
    string veri;

    for(int i=2;i<satir.length();i++)
    {
         if(satir[i]!=' ')
         {
            veri+=satir[i];
         } 
         else{
            index1=stoi(veri);
            index2=stoi(satir.substr(i+1));
         }
    
    }

    if(satir[0]=='C')
    {

        liste->Caprazlama(index1,index2);
    }
    else if(satir[0]=='M')
    {
        liste->Mutasyon(index1,index2);
    }

   }

   cout<<endl;
   cout<<"islem tamamlandi"<<endl<<endl;
   islemler.close();


}

int main()
{

    ifstream oku("Dna.txt");
    string satir;   //Kromozomlar teker teker listeye eklenir.
    LinkedList  *liste= new LinkedList();

    while(getline(oku,satir))
   {
      
      string kromozom="";
      for(char c : satir)
      {
        if(c!=' ')
        {
           kromozom+=c;
           
        }

      }

      liste->ekle(kromozom);
    
   }
    oku.close();

int satir1,satir2;
int secim;


while(true)
{
cout<<"SECENEKLER"<<endl;
cout<<"1- Caprazlama"<<endl;
cout<<"2- Mutasyon"<<endl;
cout<<"3- Otomatik Islemler"<<endl;
cout<<"4- Ekrana Yaz"<<endl;
cout<<"5- Cikis"<<endl;
cin>>secim;


switch(secim)
{

 case 1:

    
    cout<<"Hangi satirdaki kromozomlari caprazlamak istersiniz?"<<endl;
    cout<<"1. satir:";
    cin>>satir1;
    
    cout<<"2. satir:";
    cin>>satir2;

    liste->Caprazlama(satir1,satir2);
    
    cout<<endl;
    cout<<"islem tamamlandi"<<endl<<endl;
   

 break;

 case 2:

    int kromozomSatirNo;
    int genSutunNo;

    cout<<"Kromozom satir numarasini giriniz:";
    cin>>kromozomSatirNo;
    cout<<"Gen sutun numarasini giriniz:";
    cin>>genSutunNo;
    
    liste->Mutasyon(kromozomSatirNo,genSutunNo);
    cout<<endl;
    cout<<"islem tamamlandi"<<endl<<endl;

 break;

 case 3:

   otomatikIslem(liste);
   
 break;

 case 4:

      liste->ekranaYazdir();
      cout<<"Islem tamamlandi"<<endl<<endl;
      
 break;

 case 5:

 exit(0);

 break;

 default:

 cout<<"Yanlis secim yapildi!"<<endl;

 break;


}
}

delete liste;

return 0;



}