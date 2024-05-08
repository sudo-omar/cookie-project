/*
	Abou-Harb, Omar (team leader)
	Tran, Ashley

	CS A250
	Project (Part A)
*/

#include "Cookie.h"

#include <iostream>

using namespace std;

string Cookie::getName() const
{
	return name;
}

size_t Cookie::getCalories() const
{
	return calories;
}

size_t Cookie::getServings() const
{
	return servings;
}

set<string> Cookie::getIngredients() const
{
	return ingredients;
}

Cookie Cookie::getCookie() const
{
	return *this;
}

void Cookie::setName(const string& newName)
{
	name = newName;
}

void Cookie::setCalories(size_t newCalories)
{
	calories = newCalories;
}

void Cookie::setServings(size_t newServings)
{
	servings = newServings;
}

void Cookie::setIngredients(const vector<string>& newIngredients)
{
	if (!newIngredients.empty())
		ingredients.clear();

	for (const string& ingredient : newIngredients)
	{
		ingredients.insert(ingredient);
	}
}

void Cookie::printRecipe() const
{
	cout << "Name: " << name << "\n";
	cout << "Servings: " << servings << "\n";
}

void Cookie::printIngredients() const
{
	cout << "Ingredients: ";

	auto itr = ingredients.begin();
	auto itrEnd = ingredients.end();

	while (itr != itrEnd)
	{
		cout << *itr << " ";
		++itr;
	}
	cout << "\n";
}

void Cookie::printCalories() const
{
	cout << "Name: " << name << "\n";
	cout << "Calories: " << calories << "\n";
}
