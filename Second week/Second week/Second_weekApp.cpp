/*	Created by Ivana Basic on 2/4/12.
 *	Copyright 2012 NYU. All rights reserved.
 */

#include "Second_weekApp.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
Second_weekApp::Second_weekApp() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
Second_weekApp::~Second_weekApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void Second_weekApp::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void Second_weekApp::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void Second_weekApp::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void Second_weekApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
