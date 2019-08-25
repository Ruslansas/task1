#include <iostream>
#include <map>
#include <string>
#include <exception>
using namespace std;

void main()
{
	map <string, string> cities;
	multimap <string, string> cities2;
	cities["Rivne"] = "33001";
	cities["Lviv"] = "55321";
	cities["Dnipro"] = "78546";
	cities["Kyiv"] = "54679";
	for (auto el : cities)
	{
		cout << el.first << "  ----  " << el.second << endl;
	}
	try {
		cout << "Enter city: ";
		string city;
		cin >> city;
		cout << "value = " << cities.at(city) << endl;
	}
	//catch(...){}
		catch (exception &msg) {
			cout << msg.what() << endl;
		}
	auto it = cities.find("Lviv");
	if (it != cities.end())
	{
		cout << "found!!! " << it->second << endl;
	}
	else
		cout << "not found" << endl;
	cities["Lviv"] = "12442";
	for (auto el : cities)
	{
		cout << el.first << "  ----  " << el.second << endl;
	}
	cities.erase("Rivne");
	for (auto el : cities)
	{
		cout << el.first << "  ----  " << el.second << endl;
	}
	system("pause");
}