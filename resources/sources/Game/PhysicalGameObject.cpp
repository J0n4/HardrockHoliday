
//by Alexander Wei�, 2014

#include "Game\PhysicalGameObject.h"


PhysicalGameObject::PhysicalGameObject(Vektoria::CPlacement position) : GameObject(position)
{}


PhysicalGameObject::~PhysicalGameObject()
{}


void PhysicalGameObject::onCollision(Collider* collidingObject)
{}


void PhysicalGameObject::duringCollision(Collider* collidingObject)
{}

