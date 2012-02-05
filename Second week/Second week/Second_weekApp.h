/*	Created by Ivana Basic on 2/4/12.
 *	Copyright 2012 NYU. All rights reserved.
 */

#include "poObject.h"

class Second_weekApp : public poObject {
public:
	Second_weekApp();
	virtual ~Second_weekApp();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
};

