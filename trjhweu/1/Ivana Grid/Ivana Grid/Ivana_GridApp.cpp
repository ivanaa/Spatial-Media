/*	Created by Ivana Basic on 2/1/12.
 *	Copyright 2012 NYU. All rights reserved.
 */

#include "Ivana_GridApp.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
Ivana_GridApp::Ivana_GridApp() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
Ivana_GridApp::~Ivana_GridApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void Ivana_GridApp::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void Ivana_GridApp::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void Ivana_GridApp::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void Ivana_GridApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
