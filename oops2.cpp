
#include <iostream>
#include<string>
using namespace std;
class Publication{
    
    public:
    float prize;
    string Title;
        void getdata1();
       void putdata1();
};
void Publication::getdata1(){
     cout<<"Enter the title of the book :";
            cin>>Title;
            cout<<"Enter the prize of book : ";
            cin>>prize;
}
void Publication::putdata1(){
    cout<<"The book title is :"<<Title<<endl;
           cout<<"The prize of book is :"<<prize<<endl;
}
class Book:public Publication{
    
    public:
    int page_count;
       void getdata2();
      void  putdata2();
       
};
void Book::getdata2(){
    cout<<"Enter the page count :";
           cin>>page_count;
}
 void Book::  putdata2(){
           cout<<"The page count is "<<page_count<<endl;
       }
class Tape:public Publication{
    
    public:
    float playing_time;
     void getdata3();
      void putdata3();
};
void Tape ::getdata3(){
          cout<<"Enter the playing time :";
          cin>>playing_time;
      }
void Tape::putdata3(){
          cout<<"The playing time is :"<<playing_time<<endl;
      }

int main() {
  bool a=true;
while (a) {
    int m;
    Book b1;
     Tape t;
     cout<<"press 1:book\npress 2:Tape\npress 3:Exit\nEnter your choice :";
     cin>>m;
     switch (m){
         case 1:
          b1.getdata1();
          b1.getdata2();
          b1.putdata1();
          b1.putdata2();
         break;
         case 2:
          t.getdata1();
          t.getdata3();
          t.putdata1();
          t.putdata3();
          break;
          case 3:
               a=false;
               break;
          default:
          cout<<"Invalid choice !!!!!!!"<<endl;
     }
}
   
    return 0;
}
