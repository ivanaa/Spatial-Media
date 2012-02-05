/*	Created by Ivana Basic on 2/1/12.
 *	Copyright 2012 NYU. All rights reserved.
 */

#include "poObject.h"

class A3App : public poObject {
public:
	A3App();
	virtual ~A3App();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
};

