//  smImage.cpp
//  spatialMedia


#include <iostream>
#include "smImage.h"
#include "poSimpleDrawing.h"
#include "poApplication.h"


smImage::smImage( const char* fileName, int W, int H )
{  
    // set the image width and height
    width = W;
    height = H;
    
    // load in the image data from file
    FILE* F = fopen( fileName, "rb" );                  // open a file
    if ( F==NULL )
    {
        printf("ERROR: can't find file: %s\n", fileName );
        exit(0);
    }
    imageData = new unsigned char [ width*height ];     // allocate memory for the image
    fread( imageData, 1, width*height, F );             // read file date into the memory
    fclose( F );                                        // close the file
    
    // used for fastDraw method
    imageAsTexture = new poTexture( width, height, imageData, poTextureConfig(GL_LUMINANCE) );
}






int     smImage::getPixel( int x, int y )
{
    int index = x + y*width;                    // calculate the pixel index
    if ( index < 0 || index >= width*height )
    {
        printf("ERROR: getPixel out of bounds\n");
        return 0;
    }
    return imageData[index];                    // return the pixel
}







void    smImage::setPixel( int x, int y, int grayValue )
{
    int index = x + y*width;                    // calculate the pixel index
    if ( index < 0 || index >= width*height )
    {
        printf("ERROR: setPixel out of bounds\n");
        return 0;
    }
    imageData[index] = grayValue;               // set the pixel
}







void    smImage::draw()
{
    // this is an inefficent, but simple mode of drawing an image
    // we draw one rectangle for every pixel
    // use the fastDraw() method if you want something faster
    for( int x=0; x<width; x++ )
    {
        for( int y=0; y<height; y++ )
        {
            float grayValue = getPixel(x,y);            // get the gray value
            grayValue = grayValue / 255;                // convert from 0-255 to 0.0-1.0
            po::setColor( poColor( grayValue, grayValue, grayValue) );  // set the color
            po::drawFilledRect( x*5,y*5, 5, 5 );        // draw the "pixel" rectangle
        }
    }
}

void    smImage::fastDraw()
{
    // replace the image data int the texture
    imageAsTexture->replace( imageData );
    // draw the texture
    po::drawTexturedRect( imageAsTexture, poRect(0,500,500,-500) );
}



void smImage::invert()

{

 for (int x = 0; x< width; x++){
 
     for (int y = 0; y<height; y++){
     
         float invertValue = getPixel(x,y);
         invertValue = invertValue / 255;
         po::setColor(poColor(1-invertValue,1-invertValue,1-invertValue));
         po::drawFilledRect(x*5, y*5,5,5);
         
         
      }
   }

}




void smImage::flip( )
{
        
    
    videoMirror = new unsigned char[width*height];
   // mirrorTexture.allocate(width, height);
    
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width*3; j+=3) {
            // pixel number
            int pix1 = (i*width) + j;
            
             int mir1 = (i*width*3)+1 * (height*3 - j-3);
            
            imageData[index] = videoMirror[mir1];

            
          //draw pixels
            
        po::setColor( poColor( 0.3 , 0.3, 0.3) );  // set the color
         po::drawFilledRect( 100,100, 300, 300 );   

           
    
    
    
    
    

            
        }      
    
    
       
    
                   
    }}                

