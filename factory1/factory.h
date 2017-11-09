
class Iplayer {
	public:
		virtual ~Iplayer();
		virtual int start()=0;
		virtual int stop()=0;
		virtual int flush()=0;
};


class Ifactory {
	public:
		virtual ~Ifactory();
		virtual class Iplayer* createPlayer() = 0;
};


class MediaFactory :public Ifactory {
	public:
		MediaFactory();	
		~MediaFactory();	

        class Iplayer* createPlayer();
		int getPlayerStatus();
	private:
		Iplayer *player;
		int status;

};


class Nuplayer:public Iplayer {
	public:
		Nuplayer();
		~Nuplayer();
		int start();
		int stop();
		int flush();

	private:
		char *audiosink;
};
