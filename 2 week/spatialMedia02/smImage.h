
//  smImage.h
//  spatialMedia

#ifndef spatialMedia_smImage_h
#define spatialMedia_smImage_h

#include "poTexture.h"

class smImage
{
public:
    // the image constructor
    smImage( const char* fileName, int W, int H );
    
    // draw image methods
    void    draw();
    void    fastDraw();
    void  flip();
    
    void     invert();
    
    // get and set pixel methods
    int     getPixel( int x, int y );
    void    setPixel( int x, int y, int grayValue );
    
    // image data variables
    int             width, height;
    unsigned char*  imageData,videoMirror;

    // this poTexture is used for the fastDraw method
    poTexture*      imageAsTexture;
    
    
    bool imageFlipped;
    
    poTexture mirrorTexture;
    
    
    
};


#endif
