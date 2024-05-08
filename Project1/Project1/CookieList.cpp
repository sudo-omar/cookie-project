/*
	Abou-Harb, Omar (team leader)
	Tran, Ashley

	CS A250
	Project (Part B)
*/

#include "CookieList.h"

#include <iostream>

using namespace std;

void CookieList::addCookie(const Cookie& newCookie)
{
	if (count == 0)
	{
		last = new Node(newCookie, nullptr);
		first = last;
	}
	else
	{
		last->setNext(new Node(newCookie, nullptr));
		last = last->getNext();
	}

	++count;
}

void CookieList::addCookie(const std::string& newName,
	size_t newCalories, size_t newServings, 
	std::set<std::string> newIngredients)
{	
	if (count == 0)
	{
		last = new Node(Cookie(newName, newCalories, newServings, 
			newIngredients), nullptr);
		first = last;
	}
	else
	{
		last->setNext(new Node(Cookie(newName, newCalories,
			newServings, newIngredients), nullptr));
		last = last->getNext();
	}

	++count;
}

size_t CookieList::getCount() const
{
	return count;
}

bool CookieList::isEmpty() const
{
	return (count == 0);
}

bool CookieList::searchCookie(const std::string& cookieName) const
{
	Node* current = first;

	while (current != nullptr)
	{
		if (current->getCookie().getName() == cookieName)
		{
			return true;
		}
		current = current->getNext();
	}

	return false;
}

void CookieList::printAllCookies() const
{
	Node* current = first;
	
	while (current != nullptr)
	{
		cout << current->getCookie().getName() << ", ";
		current = current->getNext();
	}
}

void CookieList::clearList()
{
	Node* temp = first;

	while (first != nullptr)
	{
		first = first->getNext();
		delete temp;
		temp = first;
	}

	last = nullptr;
	count = 0;
}

CookieList::~CookieList()
{
	if (count != 0)
	{
		clearList();
	}
}

CookieList::CookieList(const CookieList& otherCookieList)
{
	Node* current = otherCookieList.first;

	while (current != nullptr)
	{
		addCookie(current->getCookie());
		current = current->getNext();
	}

	count = otherCookieList.count;
}

CookieList& CookieList::operator=(const CookieList& rightSide)
{
	if (&rightSide == this) {
		cerr << "Attempted assignment to itself.";
	}
	else
	{
		if (count != 0) {
			clearList();
		}

		Node* temp = rightSide.first;
		while (temp != nullptr) {
			addCookie(temp->getCookie());
			temp = temp->getNext();
		}

		count = rightSide.count;
	}

	return *this;

}
