/*	Created by Ivana Basic on 2/1/12.
 *	Copyright 2012 NYU. All rights reserved.
 */

#include "poObject.h"

class Ivana_GridApp : public poObject {
public:
	Ivana_GridApp();
	virtual ~Ivana_GridApp();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
};

