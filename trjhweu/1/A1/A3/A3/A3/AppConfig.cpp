/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "A3App.h"

poObject *createObjectForID(uint uid) {
	return new A3App();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "A3", 100, 100, 1024, 768);
}

void cleanupApplication() {
}