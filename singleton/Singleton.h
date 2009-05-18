#ifndef __SINGLETON_H_
#define __SINGLETON_H_

class Singleton {
public:
	static Singleton* getInstance();
private:
	// Default constructor is private, thus preventing any other method
	// or object from instantiating this object.
	Singleton();
	virtual ~Singleton();
private:
	static Singleton* instance;
};

#endif

