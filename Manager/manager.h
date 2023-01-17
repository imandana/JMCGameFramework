/*
 *  Copyright 2022 Imandana Rahimaswara
 *
 * Released under the MIT license. See the accompanying LICENSE file
 * or visit <https://opensource.org/licenses/MIT>
 */
 
 
#ifndef __MANAGER_H__
#define __MANAGER_H__


struct GameObject
{
	Vector2 position;
	Rectangle rect;
	
	Texture2D* ptrTexture;
};

struct Manager
{
	void (*InitializeOnce)();
	
	void (*Initialize)();
	
	int (*TransitionUpdate)();
	void (*MainUpdate)();
	
	void (*MainDraw)();
	void (*TransitionDraw)();
	
	void (*UnloadData)();
};

#endif // __MANAGER_H__