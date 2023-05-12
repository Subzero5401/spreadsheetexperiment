#pragma
#include "Header.h"



void spreadsheet::upscale()
{
	int c;
	std::cout << " how many would you like to add " << std::endl;
	std::cin >> c;
	std :: cout << std::endl;
	temp = new int[c + amount];
	for (int d = 0; d < amount; d++)
	{
		*(temp + d) = *(fir + d);
		






	}
	delete[] fir;
	

	fir = new int[c + amount];
	for (int d = 0; d < amount; d++)
	{
		
		*(fir + d) = *(temp + d);
		

	}
	for (int d = amount; d < (amount + c); d++)
	{
		*(fir + d) = d;
		


	}

	amount = amount + c;
	/*for (int d = 0; d < amount; d++)
	{
		std::cout << d << " this is the array and the value is  " << *(fir + d) << std::endl;






	}*/
	std::cout << " \n \n \n " << std::endl;
	delete[]temp;
	temp = nullptr;
}
void spreadsheet::vals()
{

	for (int x = 0; x < amount; x++)
	{
		std::cout << "this is element number is  " << x << " the value is " << *(fir + x) <<std::endl;

		  


	}
	std::cout << " ------------------------------------------------------------------ \n" << std::endl;





}
spreadsheet::spreadsheet() {

	std::cout << "the array is defaulted to 10 " << std::endl;// original used user input but i want the user to resize when neccesary
	amount = 10;
	fir = new int[amount];
	for (int d = 0; d < amount; d++)
	{
		*(fir + d) = d;



	}

	for (int d = 0; d < amount; d++)
	{
		std::cout << d << " this is the array and the value is  " << *(fir + d) << std::endl;
		       
		




	}

	std::cout << "end of constructor  \n \n" << std::endl;
	
}




	void spreadsheet::deleted() {

		delete[] fir;
		fir = nullptr;



	}






	void spreadsheet::delear() {
		int con = 1;
		while (con == 1)
		{
			
			
			int choose;
			int yesorno = 1;
			std::cout << " What array element would you like to delete. " << std::endl;
			vals();
			std::cout << "please enter your choice  " << std::endl;
			std::cin >> choose;
			std::cout << " The element you have chosen is \n  " << choose << " " << *(fir + choose)<<  "if this is correct press 1 for yes or 0 for no" << std::endl;
			std::cin >> yesorno;

			if (yesorno == 1)
			{
				if (choose == (amount-1))
				{



					temp = new int[amount - 1];
					for (int x = 0; x < (amount - 1); x++)
					{
						*(temp + x) = *(fir + x);
						std::cout << *(temp + x) << std::endl;
						


					}
					delete[] fir;
					fir = nullptr;
					amount = --amount;
					fir = new int[amount];
					for (int x = 0; x < amount; x++)
					{
						*(fir + x) = *(temp + x);
						std::cout << " value should be transfer " << *(fir + x) <<std::endl;





					}
					delete[] temp;
					temp = nullptr;






				}
				else if (choose < 0 || choose >= amount )
				{
					std::cout << "ill show you to putting a incorrect value in  " << std::endl;
					std::cout << " now deleting system 32 GGWP joke on you " << std::endl;


				}
				else if (choose < (amount - 1))
				{

					temp = new int[amount - 1];
					for (int x = choose; x < (amount - 1); x++)
					{

						*(fir + x) = *(fir + (x+1));
						std::cout << " value copied " << *(fir + (x)) << std::endl;



					}
					
					for (int x = 0; x < (amount -1); x++)
					{

						*(temp + x) = *(fir + x);
						std::cout << " value copied " << *(temp + x) << std::endl;



					}
					delete[] fir;
					fir = nullptr;
					amount = amount - 1;
					fir = new int[amount];

					for (int x = 0; x < amount; x++)
					{

						*(fir + x) = *(temp + x);
						std::cout << "the value of " << x << " is " << *(fir + x) <<std::endl;




					}
					delete[] temp;
					temp = nullptr;
					

				}
				con = 0;
			
			}
			else  {

				con = 1;




			}
		}

	}

	void spreadsheet::change()
	{
		int a;
		vals();
		std::cout << "what value would you like to edit " << std::endl;
		std::cin >> a;
		if (a <0)
		{
			std::cout << " error retry with a number that greater than or equal than 0 " << std::endl;
		}
		else if (a < amount)
		{	
			int b;
			std::cout << " Type the integer value you want to change that element " << a << std::endl;
			std::cin >> b;
			*(fir + a) = b;
			std::cout << "\n element " << a << "is now " << *(fir + a) << std::endl;




		}
		else {
			std::cout << " the value you enter is too high please type a value within the parameters " <<std::endl;
		}



	}



	void accessspec(spreadsheet* name, int b)// access the class array within a specfic 
	{
		std::cout << " there are " << b << "  sheet/classarrays " << std::endl;
		std::cout << " please enter your array index you would like to access --> " << std::endl;
		int c;
		std::cin >> c;

		if (c >= 0 && c < b)
		{

			name[c].vals();


		}
		else {


			std::cout << "incorrect value try again " << std::endl;


		}








	}


	void chgval(spreadsheet* name, int b)
	{
		std::cout << " there are " << b << "  sheet/classarrays " << std::endl;
		int a;
		std::cout << " which element  within the class array(cell) would you like to change " << std::endl;
		std::cin >> a;
		if (a >= 0 && a < b) {

			name[a].change();
			name[a].vals();

		}
		else {



			std::cout << " error bitch " << std::endl;
		}
		std::cout << " done changing value " << std::endl;







	}





	void chginarr(spreadsheet* name, int b)// access internal array and resizes it 
	{

		std::cout << " there are " << b << "sheet/classarrays " << std::endl;
		int a;
		std::cout << " which array within the class would you like to resize " << std::endl;
		std::cin >> a;
		if (a >= 0 && a < b)
		{
			int c;
			std::cout << " would you like to upscale or down scale, 1 for upscale , 2 for downscale --> " << std::endl;
			std::cin >> c;
			if (c == 1)
			{
				std::cout << "you have choosen to add a new array " << std::endl;
				name[a].upscale();
			}
			else if (c == 2)
			{
				std::cout << " you have choosen deletion " << std::endl;
				name[a].delear();

			}
			else {



				std::cout << "error baby ,user to be specific " << std::endl;// dont you just get bored of the same thing over and over 
			}








		}
		else {

			std::cout << "invalid value please try again " << std::endl;



		}






	}

	void chkclass(spreadsheet* name, int b)
	{
		for (int c = 0; c < b; c++)
		{
			std::cout << "class array" << c << " cells wihin class " << std::endl;
			name[c].vals();
			std::cout << "all the values" << std::endl;






		}




	}


	spreadsheet* resizecal(spreadsheet* name, int& b) // dont forget to return the pointer
	{
		int a;

		std::cout << " what would you like to resize your class to  " << std::endl;
		std::cin >> a;
		if (a > b)
		{
			spreadsheet* temp;
			temp = new spreadsheet[a];
			for (int c = 0; c < b; c++)
			{

				temp[c] = name[c];



			}

			delete name; // this release the memory connected to name 
			name = new spreadsheet[a];
			for (int c = 0; c < b; c++)
			{

				name[c] = temp[c];



			}
			std::cout << "second phase complete " << std::endl;
			b = a;
			//std::cout << b << "is equal to a \n";
			delete temp;
			temp = nullptr;
			return name;
		}
		else {



			std::cout << "try again ";
			return name;
		}





	}



	void running()
	{
		int con = 1;
		spreadsheet* iroh;
		int count = 1;
		iroh = new spreadsheet[count];
		while (con == 1)
		{
			int b;
			std::cout << "[0] if you want to terminate the program\n" << std::endl;
			std::cout << " [1] what would you like to do  1 check all the variable within all the sheets type 1 \n" << std::endl;
			std::cout << "[2] if you would like to increase class array or the sheets type 2 \n " << std::endl;
			std::cout << "[3] would you like to view the array within the the class array (sheet)  type 3\n" << std::endl;
			std::cout << "[4] if you would like to resize a specific class array cell type 4\n" << std::endl;
			std::cout << "[5]if you would like to change a specific value within a cell type 5\n " << std::endl;
			std::cin >> b;
			if (b == 1)
			{

				chkclass(iroh, count);

			}
			else if (b == 2)
			{
				iroh = resizecal(iroh, count); // must return the pointer
			}
			else if (b == 3)
			{
				accessspec(iroh, count);





			}
			else if (b == 4)
			{

				chginarr(iroh, count);





			}
			else if (b == 5)
			{
				chgval(iroh, count);



			}
			else if (b == 0)
			{
				con = 0;


			}

			else {


				std::cout << "error " << std::endl;
			}




			std::cout << "\n \n \n \n" << std::endl;












		}

		delete[] iroh;
		iroh = nullptr;












	}
