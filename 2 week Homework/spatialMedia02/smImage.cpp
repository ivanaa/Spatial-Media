//  smImage.cpp
//  spatialMedia


#include <iostream>
#include "smImage.h"
#include "poSimpleDrawing.h"
#include "poApplication.h"


smImage::smImage( const char* fileName, int W, int H )
{  
    
    float t = 0;
    float mouseeX = 0;
    
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
    
    
   // videoMirror = new unsigned char[width*height];
    
    
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





int smImage::getPixelR(int x, int y)
{

    int index = abs(x + (abs(y-width))*width);                    // calculate the pixel index
    if ( index < 0 || index >= width*height )
    {
        printf("ERROR: getPixel out of bounds\n");
        return 0;
    }
    return imageData[index];       




}




int smImage::getPixelEdge(int x, int y)
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



void smImage::flip()

{
    
    for (int x = 0; x< width; x++){
        
        for (int y = 0; y<height; y++){
            
            
                 
            float invertValue = getPixelR(x,y);
            invertValue = invertValue / 255;
            po::setColor(poColor(1-invertValue,1-invertValue,1-invertValue));
            po::drawFilledRect(x*5,y*5,5,5);
            
            
        }
    }

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


void smImage::bw()
{

    
    for (int x = 0; x< width; x++){
        
        for (int y = 0; y<height; y++){
            
            float value = getPixel(x,y);
             value = value / 255;
            
            
            if (value>0.4)
            {
              value = 1.0;
            }
            
            else {
            
                value = 0.0;
            }
            
            
            po::setColor(poColor(1-value,1-value,1-value));
            po::drawFilledRect(x*5, y*5,5,5);
            
            
        }
    }

}
    
    




void smImage::treshold()
{
    
    
    for (int x = 0; x< width; x++){
        for (int y = 0; y<height; y++){
            
            
            float value = getPixel(x,y);
        
         //   float mouseeX;
           
            
            if (value>mouseeX){
                
                value = 0.0;
            }
            
            else {
                
                value = 1.0;
                
                
            }
            po::setColor(poColor(value,value,value));
            po::drawFilledRect(x*5, y*5,5,5);
            
            
        }
    }
    
}



void smImage::edge()
{


    for (int x = 0; x< width; x++){
        for (int y = 0; y<height; y++){
            
            
            float value = getPixel(x,y);
            float value1 = getPixel (x+1,y);
                       
            float t = mouseeX;
            if (value- value1 > abs(t)){
                
                value = 0.0;
            }
            
            else {
                
                value = 1.0;
                
                
            }
            po::setColor(poColor(value,value,value));
            po::drawFilledRect(x*5, y*5,5,5);
            
            
        }
    }




}
    

            
                

