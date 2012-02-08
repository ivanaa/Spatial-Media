
//  smImage.h
//  spatialMedia

#ifndef spatialMedia_smImage_h
#define spatialMedia_smImage_h

#include "poTexture.h"
#include "poObject.h"
#include <iostream>



class smImage
{
public:
    // the image constructor
    smImage( const char* fileName, int W, int H );
    
    // draw image methods
    void    draw();
    void    fastDraw();
    void    flip();
    
    void    invert();
    void    bw();
    void    treshold();
    void    edge();

    
    // get and set pixel methods
    
     int     getPixelR( int x, int y );
    int     getPixelEdge( int x, int y );

    int     getPixel( int x, int y );
    void    setPixel( int x, int y, int grayValue );
    
    // image data variables
    int             width, height;
    unsigned char*  imageData;
    unsigned char * fimageData;

    // this poTexture is used for the fastDraw method
    poTexture*      imageAsTexture;
    
    float t;
    bool imageFlipped;
    
    poTexture mirrorTexture;
    float mouseeX;
  
    
    
    
    
};


#endif
