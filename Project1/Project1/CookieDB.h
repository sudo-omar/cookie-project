/*
	Abou-Harb, Omar (team leader)
	Tran, Ashley

	CS A250
	Project (Part B)
*/

#ifndef COOKIEDB_H
#define COOKIEDB_H

#include <string>
#include <vector>
#include <set>

void getData(std::string& newName, size_t& newCalories,
	size_t& newServings, std::set<std::string>& newIngredients, 
	size_t idx);

#endif