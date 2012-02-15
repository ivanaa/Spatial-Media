

#include "spatialMedia02App.h"
#include "poApplication.h"
#include "poCamera.h"
#include <iostream>
using namespace std;

// APP CONSTRUCTOR. Create all objects here.
spatialMedia02App::spatialMedia02App() {
	addModifier(new poCamera2D(poColor::black));
    
    // register for mouse and key events
    addEvent( PO_MOUSE_MOVE_EVENT, this );
    addEvent( PO_KEY_DOWN_EVENT, this );

    // make a new smImage
myImage0 = new smImage( 400, 300 );
    
  myImage00 = new smImage( 400, 300 ); 
    
   myImage3 = new smImage( 400,300 );
    
    threshold = 20;
}

// APP DESTRUCTOR. Delete all objects here.
spatialMedia02App::~spatialMedia02App() {
}

// UPDATE. Called once per frame. Animate objects here.
void spatialMedia02App::update() {
	
    
    

    
    
    for (int x = 0; x<myImage0->width; x++){
        for (int y = 0; y< myImage0->height; y++){
        
        
        
        int back = myImage0->getPixel(x,y);
        int forg = myImage00->getPixel(x,y);

        int diff = abs (back- forg);
            
            if (diff>threshold){
            
                diff = 255;
            
            
            }
            else {
            
            
                diff = 0;
            
            }
            myImage3->setPixel(x,y,diff);

    }
    }

    if ( lastKeyDown == '1' )
    {
        
        myImage0 = new smImage( "1.raw", 400, 300 ); 
        myImage00 = new smImage( "2.raw", 400, 300 ); 
        
        threshold = 28;
    }
    
    
    
    if ( lastKeyDown == '2' )
    {
        
        myImage0 = new smImage( "3.raw", 400, 300 ); 
        myImage00 = new smImage( "4.raw", 400, 300 );
        
        threshold = 64;

    }
    
    
    
    if ( lastKeyDown == '3' )
    {
        
        myImage0 = new smImage( "5.raw", 400, 300 ); 
        myImage00 = new smImage( "6.raw", 400, 300 ); 
        threshold = 12;

    }
    
    cout<< threshold <<endl;

    
}

// DRAW. Called once per frame. Draw objects here.
void spatialMedia02App::draw() {
	
    

    
    
      // draw the image
    myImage0->fastDraw(100,100);
    
    myImage00->fastDraw(600,100);
    
    myImage3->fastDraw(600,450);
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void spatialMedia02App::eventHandler(poEvent *event) {
	
    if ( event->type == PO_MOUSE_MOVE_EVENT )
    {
        mouseX = event->globalPosition.x;
        mouseY = event->globalPosition.y;
        
        
        threshold = mouseX;
        
 
            }
    
    if ( event->type == PO_KEY_DOWN_EVENT )
    {
        lastKeyDown = event->keyChar;
    }
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void spatialMedia02App::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}


