// PetshopExercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//In a petshop, we have different types of pets:
// -Dogs: they live an average of 15 years
// -Fish: they live an average of 1.4 years
// -Turtles: they live an average of 45 years

//We want to predict how many animals will still be alive in x years from now in a petshop.
//The animals currently in the petshop are:
// -Dog "Bernie", 3 years old
// -Fish "Hannibal", 5 weeks old (fish age is usually expressed in weeks)
// -Turtle "Donnatello", 21 years old
// -Turtle "Raphael", 5 years old
// -Fish "Nemo", 10 weeks old
// -Dog "Lassie", 8 years old
// -Dog "Max", 14 years old

//Class Petshop should implement the following methods:
// void PredictAnimalsAlive(double yearsFromNow)
// void PredictTurtlesAlive(double yearsFromNow)
//
//These methods should print in the console which animals/turtles can be expected to be alive in 'yearsFromNow' years

int main()
{
	//Example test-cases:
	//Test-case #1: PredictAnimalsAlive(1.3) -> "Bernie", "Hannibal", "Donnatello", "Raphael", "Lassie"
	//Test-case #2: PredictAnimalsAlive(25) -> "Raphael"
	//Test-case #3: PredictTurtlesAlive(1.3) -> "Donnatello", "Raphael"
	//Test-case #4: PredictTurtlesAlive(25) -> "Raphael"

    return 0;
}

