// Приведенный ниже блок ifdef — это стандартный метод создания макросов, упрощающий процедуру
// экспорта из библиотек DLL. Все файлы данной DLL скомпилированы с использованием символа FUNCTIONS_EXPORTS
// Символ, определенный в командной строке. Этот символ не должен быть определен в каком-либо проекте,
// использующем данную DLL. Благодаря этому любой другой проект, исходные файлы которого включают данный файл, видит
// функции FUNCTIONS_API как импортированные из DLL, тогда как данная DLL видит символы,
// определяемые данным макросом, как экспортированные.
#ifdef FUNCTIONS_EXPORTS
#define FUNCTIONS_API __declspec(dllexport)
#else
#define FUNCTIONS_API __declspec(dllimport)
#endif

#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <clocale>
#include <cwctype>
#include <codecvt>
#include <iomanip>
#include <regex>
#include <algorithm>

class Transmission {
protected:
	std::wstring number;
	std::wstring fromcountry;
	std::wstring fromcity;
	std::wstring fromadress;
	int fromindex;
	std::wstring country;
	std::wstring city;
	std::wstring adress;
	int index;
	std::wstring from;
	std::wstring to;
	std::wstring phonenumber;
	float mass;
	std::wstring state;
	int type = 0;
public:
	Transmission();
	std::wstring getNumber();
	std::wstring getFromCountry();
	std::wstring getFromCity();
	std::wstring getFromAdress();
	int getFromIndex();
	std::wstring getCountry();
	std::wstring getCity();
	std::wstring getAdress();
	int getIndex();
	std::wstring getFrom();
	std::wstring getTo();
	std::wstring getPhoneNumber();
	std::wstring getState();
	float getMass();
	int getType();
	void setNumber(std::wstring number);
	void setFromCountry(std::wstring fromcountry);
	void setFromCity(std::wstring fromcity);
	void setFromAdress(std::wstring fromadress);
	void setFromIndex(int fromindex);
	void setCountry(std::wstring country);
	void setCity(std::wstring city);
	void setAdress(std::wstring adress);
	void setIndex(int index);
	void setFrom(std::wstring from);
	void setTo(std::wstring to);
	void setPhoneNumber(std::wstring phonenumber);
	void setMass(float mass);
	void setType(int type);
	void setState(std::wstring state);
	Transmission(const Transmission& temp);
	Transmission* copy();
	virtual float* getSize();
	virtual void setSize(float x, float y, float z);
};

class Mail : public Transmission {
public:
	Mail(std::wstring number, std::wstring fromcountry, std::wstring fromcity, std::wstring fromadress, int fromindex, std::wstring country, std::wstring city, std::wstring adress, int index, std::wstring from, std::wstring to, std::wstring phonenumber, float mass, std::wstring state);
	Mail(const Mail& temp);
	Transmission* copy();
};

class Package : public Transmission {
private:
	float x, y, z;
public:
	Package(std::wstring number, std::wstring fromcountry, std::wstring fromcity, std::wstring fromadress, int fromindex, std::wstring country, std::wstring city, std::wstring adress, int index, std::wstring from, std::wstring to, std::wstring phonenumber, float mass, std::wstring state, float x, float y, float z);
	float* getSize();
	void setSize(float x, float y, float z);
	Package(const Package& temp);
	Transmission* copy();
};

struct PhoneComp
{
	bool operator()(Transmission* s, std::wstring i);
	bool operator()(std::wstring i, Transmission* s);
};

struct Comp {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByFromCountry {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByCountry {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByFromCity {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByCity {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByFromAdress {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByAdress {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByFrom {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByTo {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByFromIndex {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByIndex {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByPhoneNumber {
	bool operator() (Transmission* a, Transmission* b) const;
};
struct CompByMass {
	bool operator() (Transmission* a, Transmission* b) const;
};

class DB {
public:
	std::set<Transmission*, Comp>* mails;
	std::set<Transmission*, Comp>* packages;
	DB();
	~DB();
	DB(const DB& temp);
	DB& operator=(const DB& temp);
	void saveFile();
};

class FUNCTIONS_API CFunctions {
private:
	static CFunctions* instance;
	CFunctions();
	CFunctions(const CFunctions&);
	CFunctions& operator=(CFunctions&);
	DB* db;
public:
	static CFunctions* getInstance();
	~CFunctions();
	void getAll(int& size, int* (&types), int* (&fromindexes), int* (&indexes), float* (&masses), wchar_t*** (&str), std::wstring filter, int number);
	void addTransmission(std::wstring number,
		std::wstring fromcountry,
		std::wstring fromcity,
		std::wstring fromadress,
		std::wstring fromindex,
		std::wstring country,
		std::wstring city,
		std::wstring adress,
		std::wstring index,
		std::wstring from,
		std::wstring to,
		std::wstring phonenumber,
		std::wstring mass,
		std::wstring state,
		std::wstring type,
		std::wstring x,
		std::wstring y,
		std::wstring z
	);
	void editState(std::wstring number, std::wstring state);
};

