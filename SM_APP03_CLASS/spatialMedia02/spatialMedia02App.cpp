

#include "spatialMedia02App.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
spatialMedia02App::spatialMedia02App() {
	addModifier(new poCamera2D(poColor::black));
    
    // register for mouse and key events
    addEvent( PO_MOUSE_MOVE_EVENT, this );
    addEvent( PO_KEY_DOWN_EVENT, this );

    
    
    
   // width = W;
    //height = H;
    // make a new smImage
    myImage1 = new smImage( "77.raw", 450,300 );
    
    myImage2 = new smImage( "78.raw", 450, 300 ); 
    
    myImage3 = new smImage( width,height );
    
    threshold = 20;
}

// APP DESTRUCTOR. Delete all objects here.
spatialMedia02App::~spatialMedia02App() {
}

// UPDATE. Called once per frame. Animate objects here.
void spatialMedia02App::update() {
	
    
    for (int x=0; x<width; x++){
        for (int y=0; y<height;y++){
        
        
          int  back = myImage1->getPixel(x,y);
           int  forg = myImage2->getPixel(x,y);
        
            int diff = abs(back- forg);
            myImage3->getPixel(diff,diff);

        
        }}

    // write your own 
    // background subtraction
    // code here
    
}

// DRAW. Called once per frame. Draw objects here.
void spatialMedia02App::draw() {
	
    // draw the image
    myImage1->fastDraw(100,100);
    
    myImage2->fastDraw(600,100);
    
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


