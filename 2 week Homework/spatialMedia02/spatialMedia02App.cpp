

#include "spatialMedia02App.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
spatialMedia02App::spatialMedia02App() {
	addModifier(new poCamera2D(poColor::black));
    
    // register for mouse and key events
    addEvent( PO_MOUSE_MOVE_EVENT, this );
    addEvent( PO_KEY_DOWN_EVENT, this );

   
    //flot mouseeX = 0;
    // make a new smImage
    myImage = new smImage( "bird.raw", 100, 100 );
}

// APP DESTRUCTOR. Delete all objects here.
spatialMedia02App::~spatialMedia02App() {
}

// UPDATE. Called once per frame. Animate objects here.
void spatialMedia02App::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void spatialMedia02App::draw() {
	
    // draw the image
    
    
    
    if ( lastKeyDown == '1' )
    {
        myImage->draw();
        
    }

    
    
    
    if ( lastKeyDown == '2' )
    {
        myImage->invert();
    
}

    
    if ( lastKeyDown == '3' )
    {
        myImage->flip();
        
    }
    
    if ( lastKeyDown == '4' )
    {
        myImage->bw();
        
    }
    
    if ( lastKeyDown == '5' )
    {

        myImage->treshold();
       
    }
    
    
    if ( lastKeyDown == '6' )
    {
        
        myImage->edge();
        
    }

    
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void spatialMedia02App::eventHandler(poEvent *event) {
	
    if ( event->type == PO_MOUSE_MOVE_EVENT )
    {
        mouseX = event->globalPosition.x;
        mouseY = event->globalPosition.y;
        myImage->mouseeX = mouseX;
        
    }
    
   
        
    if ( event->type == PO_KEY_DOWN_EVENT )
    {
        lastKeyDown = event->keyChar;
    }
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void spatialMedia02App::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}


