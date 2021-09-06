#include <iostream>
#pragma once

class puppy
{

private:
	int amount;
	int* fir;
	int* temp = nullptr;
	
	
public:
	
	
	puppy();
	void upscale();
	void delear();
	void vals(); // how many are in the array itself
	void deleted();
	void change();








	



};
void accessspec(puppy* name, int b);
void chgval(puppy* name, int b);
void chginarr(puppy* name, int b);// access internal array and resizes it 
void chkclass(puppy* name, int b);
puppy* resizecal(puppy* name, int& b); // dont forget to return the pointer
void running();