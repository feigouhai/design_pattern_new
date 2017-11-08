#include <iostream>
#include "factory.h"

using namespace std;


Tire::Tire() {
}

ATire::ATire(){
	cout <<"instant Good Tire"<<endl;
}

int ATire::method(){
	cout <<"This is Good Tire"<<endl;
}

int AEngine::method(){
	cout << "This is Good Engine" <<endl;
}

BTire::BTire(){
	cout <<"instant Normal Tire"<<endl;
}

int BTire::method(){
	cout <<"this is Normal Tire"<<endl;
}

int BEngine::method(){
	cout << "this is Normal Engine" <<endl;
}

int Q3Factory::createTire() {
	tire = new ATire;	
}

int Q3Factory::createEngine() {
	engine = new AEngine;
	engine->method();
}

int Q6Factory::createTire() {
	tire = new BTire;	
}


int Q6Factory::createEngine() {
	engine = new BEngine;
	engine->method();
}


Q6Factory::~Q6Factory(){
}

Q3Factory::~Q3Factory(){
}

Q3Factory::Q3Factory(){
	cout<<"inst Q3Factory"<<endl;
}

AbstractFactory::~AbstractFactory() {}
AbstractFactory::AbstractFactory() {}

Q6Factory::Q6Factory() {
	cout<<"inst Q6Factory" <<endl;
}

int main()
{
	AbstractFactory *Q6fact= new Q6Factory();
	AbstractFactory *Q3fact= new Q3Factory();
	
	Q6fact->createEngine();
	Q3fact->createEngine();

	cout << "factory "<<endl;
}
