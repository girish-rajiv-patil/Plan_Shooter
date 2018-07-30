#ifndef __GAMESCENE_H__
#define __GAMESCENE_H__

#include "cocos2d.h"
#include "Enemy.h"

class GameScene : public cocos2d::Layer
{
private:
	int m_x;									//
	int m_y;
	int m_score;								//
	cocos2d::Vector<Enemy*> allEnemy;			
	cocos2d::Vector<cocos2d::Sprite*> allBullet;
	int dir;
	cocos2d::Sprite* galaxy1;	
	cocos2d::Sprite* galaxy2;

	void scrollBG(float);
	void newBody(float t);
	void moveBody(float t);
	void newPlane();
	void newBullet();
	void newEnemy();
	void movePlane();
	void moveBullet();
	void moveEnemy();
	void newBomb(int x, int y, int type);		
	void cleanBomb(Node* pRef);
	void update(float t);
	void gameOver();

public:
	static cocos2d::Scene * createScene();
	virtual bool init();
	CREATE_FUNC(GameScene);
};

#endif
