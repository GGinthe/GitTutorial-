#include "pch.h"
#include<string>
#include<iostream>
using namespace System;

bool Guess(int number) {
	static int target = 0;
	static int count = 0;
	if (!target) {
		Random r;
		target = r.Next() % 100 + 1;
	}
	if (number == target) {
		std::cout << "Correct !!";
		target = -1;
		return true;
	}else if(number > target)
		std::cout << "Smaller" << std::endl;
	 else if(number < target) std::cout << "Bigger" << std::endl;
	 return false;
}
int main(array<System::String ^> ^args)
{
		int guess, test;
		do {
			std::cin >> guess;
		} while (!Guess(guess));
    return 0;
}
//push 7 fuck oop