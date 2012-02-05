/*	Created by Ivana Basic on 2/1/12.
 *	Copyright 2012 NYU. All rights reserved.
 */

#include "Assignment_1App.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
Assignment_1App::Assignment_1App() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
Assignment_1App::~Assignment_1App() {
}

// UPDATE. Called once per frame. Animate objects here.
void Assignment_1App::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void Assignment_1App::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void Assignment_1App::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void Assignment_1App::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
