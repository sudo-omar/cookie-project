/*
    Abou-Harb, Omar (team leader)
    Tran, Ashley

    CS A250
    Project (Part A/B)
*/


#include "Testing.h"

#include <iostream>

using namespace std;

int main() {
    //PART A:
    Cookie cookie1;
    cout << "Name: " << cookie1.getName() << "\n" <<
        "Calories: " << cookie1.getCalories() << "\n" <<
        "Servings: " << cookie1.getServings() << '\n';

    //mutate
    cookie1.setName("Lemon Square Bars");
    cookie1.setCalories(140);
    cookie1.setServings(30);
    cookie1.setIngredients(vector<string>{ "Flour", "sugar", "butter", "eggs",
        "lemon juice" });

    cout << "Name: " << cookie1.getName() << "\n" <<
        "Calories: " << cookie1.getCalories() << "\n" <<
        "Servings: " << cookie1.getServings() << '\n';

    //second obj
    Cookie cookie2("omars cookie", 100, 2, { "Omar's flour", "Omar's sugar" });

    cout << "Name: " << cookie2.getName() << "\n" <<
        "Calories: " << cookie2.getCalories() << "\n" <<
        "Servings: " << cookie2.getServings() << '\n';

    //PART B:
    CookieList cookieList1;
    createCookieList(cookieList1);
    cookieList1.printAllCookies();

    cout << "\n";

    Cookie cookie3("Matcha Crinkle", 150, 14, { "matcha", "milk", "flour", "eggs" });
    cookieList1.addCookie(cookie3);
    cookieList1.printAllCookies();

    cout << "\n";

    if (cookieList1.searchCookie("Matcha Crinkle"))
    {
        cout << "Cookie Found";
    }
    else {
        cout << "Not Found";
    }

    cout << "\n";

    if (cookieList1.searchCookie("Ube"))
    {
        cout << "Cookie Found";
    }
    else {
        cout << "Not found";
    }

    cout << "\n";

    //copy constructor
    CookieList cookieList2(cookieList1);
    cookieList1.printAllCookies();
    cout << "\n";
    cookieList2.printAllCookies();

    cout << "\n";

    //clearList()
    cookieList1.clearList();
    cout << "CLEARLIST(): ";
    cookieList1.printAllCookies();
    cout << "\n";
    cookieList2.printAllCookies();

    //assignment operator
    //TESTING longer param
    cout << "\nTESTING LONGER PARAM\n";
    CookieList cookieList3;
    cookieList3.addCookie("Ashley's cookie", 109, 4, { "Ashley's flour", "Ashley's sugar",
        "Ashley's baking powder" });
    cookieList3.addCookie("Omar's special cookie", 100, 3, { "creatine", "test", "milk" });

    CookieList cookieList4;
    cookieList4.addCookie("Justin's cookie", 200, 3, { "Justin’s flour", "Justin’s sugar", "Justin’s baking powder" });

    cout << "\n";

    cout << "PRINTING LIST3\n";
    cookieList3.printAllCookies();
    cout << "PRINTING LIST4\n";
    cookieList4.printAllCookies();
    cout << "\n";

    cout << "ASSIGNING...\n";
    cookieList3 = cookieList4;

    cout << "PRINTING LIST3\n";
    cookieList3.printAllCookies();
    cout << "PRINTING LIST4\n";
    cookieList4.printAllCookies();
    cout << "\n";

    cout << "CLEARING...\n";
    cookieList3.clearList();
    cout << "PRINTING LIST3\n";
    cookieList3.printAllCookies();
    cout << "PRINTING LIST4\n";
    cookieList4.printAllCookies();
    cout << "\n";


    return 0;
}