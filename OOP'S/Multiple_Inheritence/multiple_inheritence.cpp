#include<iostream>
using namespace std;

class Engineer{

    public : 
    string speciliazation;

    Engineer(){
        cout<<"Engineer constructor "<<endl;
    }

    void work(){
        cout<<" My work is in "<<speciliazation<<endl;
    }
};

class Youtuber{
public:
int subscriber;

Youtuber(){
    cout<<"Youtuber Constructor"<<endl;
}

void contentcreator(){
    cout<<" i have a subscriber base "<<subscriber<<endl;
}


};


// Multiple Inheritence :

class CodeTeacher : public Engineer , public Youtuber{  // jisko pehle inherit uska constructor pehle 
                                                        // chalegaa 
public:
string name;

CodeTeacher(){
    cout<<"code constructor"<<endl;
}

CodeTeacher(string speciliazation,int subscriber,string name){

this->speciliazation=speciliazation;
this->subscriber=subscriber;
this->name=name;

}

void showcase(){
    cout<<"My name is "<<name<<endl;
    work();
    contentcreator();
}

};


int main(){

  CodeTeacher A1("CODER ",1000,"rohit");
  A1.showcase();

  CodeTeacher A2;
    return 0;
}








