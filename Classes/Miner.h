#ifndef __Miner_SCENE_H__
#define __Miner_SCENE_H__

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "spine/spine-cocos2dx.h"

using namespace cocos2d::ui;
using namespace spine;

class Miner : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(Miner);

	void runAppear();
private:

	SkeletonAnimation* miner;
};

#endif // __Miner_SCENE_H__
