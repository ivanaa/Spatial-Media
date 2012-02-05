/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "Assignment_1App.h"

poObject *createObjectForID(uint uid) {
	return new Assignment_1App();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "Assignment_1", 100, 100, 1024, 768);
}

void cleanupApplication() {
}