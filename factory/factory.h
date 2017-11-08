
class Tire {
	public:
		Tire();
		virtual int method() =0;	
};

class Engine {
	public:
		virtual int method() = 0;
};

class ATire :public Tire {
	public:
		ATire();
		int method();
};

class AEngine :public Engine {
	public:
		int method();
};


class BTire :public Tire {
	public:
		BTire();
		int method();
};

class BEngine :public Engine {
	public:
		int method();
};



class AbstractFactory {
	public:
		AbstractFactory();
		virtual int createTire() = 0;
		virtual int createEngine() = 0;
	protected:
		class Tire *tire;
		class Engine *engine;
		~AbstractFactory();
};


class Q3Factory : public AbstractFactory {
	public:
		Q3Factory();
		int createTire();
		int createEngine();

	protected:
		~Q3Factory();
};

class Q6Factory : public AbstractFactory {
	public:
		Q6Factory();
		int createTire();
		int createEngine();

	protected:
		~Q6Factory();
};

