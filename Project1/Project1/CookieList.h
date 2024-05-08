/*
	Abou-Harb, Omar (team leader)
	Tran, Ashley

	CS A250
	Project (Part B)
*/

#ifndef COOKIELIST_H
#define COOKIELIST_H

#include "Cookie.h"

class Node
{
public:
	Node() : cookie(), next(nullptr) {}
	Node(const Cookie& newCookie, Node* newNext)
		: cookie(newCookie), next(newNext) {}
	Cookie& getCookie() { return cookie; }
	Node* getNext() const { return next; }
	void setCookie(const Cookie& newCookie) { cookie = newCookie; }
	void setNext(Node* newNext) { next = newNext; }
	~Node() {}
private:
	Cookie cookie;
	Node* next;
};

class CookieList
{
public:
	// Default constructor
	CookieList() : first(nullptr), last(nullptr), count(0) {}
	
	// Functions addCookie
	void addCookie(const Cookie& newCookie);
	void addCookie(const std::string& newName, size_t newCalories, 
		size_t newServings, const std::set<std::string> 
		newIngredients);

	// Accessor function
	size_t getCount() const;

	// Boolean functions
	bool isEmpty() const;
	bool searchCookie(const std::string& cookieName) const;

	// Function printAllCookies
	void printAllCookies() const;

	// Function clearList
	void clearList();

	// The Big Three
	~CookieList();
	CookieList(const CookieList& otherCookieList);
	CookieList& operator=(const CookieList& rightSide);

private:
	Node* first;
	Node* last;
	size_t count;
};

#endif

