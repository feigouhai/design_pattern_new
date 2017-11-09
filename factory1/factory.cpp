#include <iostream>
#include <string.h>
#include "factory.h"

using namespace std;


MediaFactory::MediaFactory(){
	cout << "init Media Factory"<<endl;	
}

int MediaFactory::getPlayerStatus()  {
	return status;
}

class Iplayer* MediaFactory::createPlayer() {
	return new Nuplayer();	
}

Nuplayer::Nuplayer() {
	audiosink = new char[20];
	char *str = "Main output";
	strcpy(audiosink, str);
	cout << "init Nuplayer"<<endl;	
	cout << "set param " << audiosink <<endl;
}


int Nuplayer::start() {
	cout << "play start"<<endl;
}

int Nuplayer::stop() {
	cout << "play stop"<<endl;
}

int Nuplayer::flush() {
	cout << "play flush"<<endl;
}

Nuplayer::~Nuplayer() {
//	delete audiosink; 
	cout <<"destory Nuplayer " <<endl;
}

Iplayer::~Iplayer(){
}

Ifactory::~Ifactory(){
}

MediaFactory::~MediaFactory(){
	cout << "destory Media Factory"<<endl;	
}



int main(){
	Ifactory *factory = new MediaFactory();
	Iplayer *player = factory->createPlayer();

	player->start();
	player->flush();
	player->stop();

	delete factory;
	delete player;
	return 0;
}
