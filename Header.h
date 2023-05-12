#include <iostream>
#pragma once

class spreadsheet
{

private:
	int amount;
	int* fir;
	int* temp = nullptr;
	
	
public:
	
	
	spreadsheet();
	void upscale();
	void delear();
	void vals(); // how many are in the array itself
	void deleted();
	void change();








	



};
void accessspec(spreadsheet* name, int b);
void chgval(spreadsheet* name, int b);
void chginarr(spreadsheet* name, int b);// access internal array and resizes it 
void chkclass(spreadsheet* name, int b);
spreadsheet* resizecal(spreadsheet* name, int& b); // dont forget to return the pointer
void running();
