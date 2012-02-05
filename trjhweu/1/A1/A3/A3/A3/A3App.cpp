/*	Created by Ivana Basic on 2/1/12.
 *	Copyright 2012 NYU. All rights reserved.
 */

#include "A3App.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
A3App::A3App() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
A3App::~A3App() {
}

// UPDATE. Called once per frame. Animate objects here.
void A3App::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void A3App::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void A3App::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void A3App::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
