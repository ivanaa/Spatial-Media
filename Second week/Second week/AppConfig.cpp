/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "Second_weekApp.h"

poObject *createObjectForID(uint uid) {
	return new Second_weekApp();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "Second_week", 100, 100, 1024, 768);
}

void cleanupApplication() {
}