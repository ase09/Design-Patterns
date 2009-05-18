
#include <stdlib.h>
#include "Singleton.h"

Singleton* Singleton::instance = NULL;

Singleton::Singleton() {
}

Singleton::~Singleton() {
	if (NULL != instance) {
		delete instance;
	}
}

Singleton* Singleton::getInstance() {
	if (NULL == instance) {
		instance = new Singleton;
	}
	return instance;
}

