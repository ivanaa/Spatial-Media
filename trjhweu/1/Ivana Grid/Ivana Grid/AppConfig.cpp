/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "Ivana_GridApp.h"

poObject *createObjectForID(uint uid) {
	return new Ivana_GridApp();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "Ivana_Grid", 100, 100, 1024, 768);
}

void cleanupApplication() {
}