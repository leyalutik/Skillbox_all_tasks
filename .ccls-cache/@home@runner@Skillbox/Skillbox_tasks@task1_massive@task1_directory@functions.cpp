#include "functions.h"
#include <iostream>
#include <string>
                                                                                 gg

void house() {
	const int32_t NUMBER_FLATS_TOTAL = 10;
	int32_t i = 0;
	std::string surnames[10];
	while (i < NUMBER_FLATS_TOTAL) {
		std::cout << "Input surname for flat " << i + 1 << ":\n";
		std::cin >> surnames[i];
		++i;
	}
	i = 0;
	int32_t number = 0;
	int32_t number_tries = 3;
	while (i < number_tries) {
		std::cout << "Input number flat in span [1,10] :\n";
		std::cin >> number;
		while (!std::cin || number < 1 || number > 10) {
			if (std::cin.bad()) //поток повреждён; Отправляем отчет об ошибке
								//внешней программе
			{
				std::cout << "In function stream cin was corrupted";
				exit(1);
			}
			if (std::cin.eof()) {
				std::cout << "The input stream is overloaded.\n";
			}
			if (std::cin.fail())		  // unexpected value			{
				std::cin.clear();		  // make ready for more input
			std::cin.ignore(32767, '\n'); // delete garbage

			std::cout << "Illegal value. Input again:\n";
			std::cin >> number;
		}
		std::cout << surnames[number - 1] << " lives in flat " << number
				  << ".\n";
		++i;
	}

	std::cout << "\tThe end.\n";
}