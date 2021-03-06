// ClassHierarchies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Renderer.h"
#include "Box.h"
#include "Sphere.h"

int main()
{
	Renderer myRenderer;
	myRenderer.AddDrawable(new Box());
	myRenderer.Draw();
	myRenderer.AddDrawable(new Sphere());
	myRenderer.Draw();
	myRenderer.AddDrawable(new Box());
	myRenderer.Draw();
	myRenderer.AddDrawable(new Box());
	myRenderer.Draw();
	myRenderer.AddDrawable(new Sphere());
	myRenderer.Draw();
    return 0;
}

