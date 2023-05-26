// Functions.cpp : Определяет экспортируемые функции для DLL.
//

#include "pch.h"
#include "framework.h"
#include "Functions.h"

const std::locale loc = std::locale(std::locale(), new std::codecvt_utf8<wchar_t>);

Transmission::Transmission() {}

std::wstring Transmission::getNumber() {
	return number;
}
std::wstring Transmission::getFromCountry() {
	return fromcountry;
}
std::wstring Transmission::getFromCity() {
	return fromcity;
}
std::wstring Transmission::getFromAdress() {
	return fromadress;
}
int Transmission::getFromIndex() {
	return fromindex;
}
std::wstring Transmission::getCountry() {
	return country;
}
std::wstring Transmission::getCity() {
	return city;
}
std::wstring Transmission::getAdress() {
	return adress;
}
int Transmission::getIndex() {
	return index;
}
std::wstring Transmission::getFrom() {
	return from;
}
std::wstring Transmission::getTo() {
	return to;
}
std::wstring Transmission::getPhoneNumber() {
	return phonenumber;
}
float Transmission::getMass() {
	return mass;
}
int Transmission::getType() {
	return type;
}
std::wstring Transmission::getState() {
	return state;
}
void Transmission::setNumber(std::wstring number) {
	this->number = number;
}
void Transmission::setFromCountry(std::wstring fromcountry) {
	this->fromcountry = fromcountry;
}
void Transmission::setFromCity(std::wstring fromcity) {
	this->fromcity = fromcity;
}
void Transmission::setFromAdress(std::wstring fromadress) {
	this->fromadress = fromadress;
}
void Transmission::setFromIndex(int fromindex) {
	this->fromindex = fromindex;
}
void Transmission::setCountry(std::wstring country) {
	this->country = country;
}
void Transmission::setCity(std::wstring city) {
	this->city = city;
}
void Transmission::setAdress(std::wstring adress) {
	this->adress = adress;
}
void Transmission::setIndex(int index) {
	this->index = index;
}
void Transmission::setFrom(std::wstring from) {
	this->from = from;
}
void Transmission::setTo(std::wstring to) {
	this->to = to;
}
void Transmission::setPhoneNumber(std::wstring phonenumber) {
	this->phonenumber = phonenumber;
}
void Transmission::setMass(float mass) {
	this->mass = mass;
}
void Transmission::setType(int type) {
	this->type = type;
}
void Transmission::setState(std::wstring state) {
	this->state = state;
}
Transmission::Transmission(const Transmission& temp) {}
Transmission* Transmission::copy() { return NULL; }
float* Transmission::getSize() {
	return NULL;
}
void Transmission::setSize(float x, float y, float z) {}

Mail::Mail(std::wstring number, std::wstring fromcountry, std::wstring fromcity, std::wstring fromadress, int fromindex, std::wstring country, std::wstring city, std::wstring adress, int index, std::wstring from, std::wstring to, std::wstring phonenumber, float mass, std::wstring state) {
	this->number = number;
	this->fromcountry = fromcountry;
	this->fromcity = fromcity;
	this->fromadress = fromadress;
	this->fromindex = fromindex;
	this->country = country;
	this->city = city;
	this->adress = adress;
	this->index = index;
	this->from = from;
	this->to = to;
	this->phonenumber = phonenumber;
	this->mass = mass;
	this->type = 1;
	this->state = state;
}
Mail::Mail(const Mail& temp) {
	this->number = temp.number;
	this->fromcountry = temp.fromcountry;
	this->fromcity = temp.fromcity;
	this->fromadress = temp.fromadress;
	this->fromindex = temp.fromindex;
	this->country = temp.country;
	this->city = temp.city;
	this->adress = temp.adress;
	this->index = temp.index;
	this->from = temp.from;
	this->to = temp.to;
	this->phonenumber = temp.phonenumber;
	this->mass = temp.mass;
	this->type = temp.type;
	this->state = temp.state;
}
Transmission* Mail::copy() {
	return new Mail(*this);
}

Package::Package(std::wstring number, std::wstring fromcountry, std::wstring fromcity, std::wstring fromadress, int fromindex, std::wstring country, std::wstring city, std::wstring adress, int index, std::wstring from, std::wstring to, std::wstring phonenumber, float mass, std::wstring state, float x, float y, float z) {
	this->number = number;
	this->fromcountry = fromcountry;
	this->fromcity = fromcity;
	this->fromadress = fromadress;
	this->fromindex = fromindex;
	this->country = country;
	this->city = city;
	this->adress = adress;
	this->index = index;
	this->from = from;
	this->to = to;
	this->phonenumber = phonenumber;
	this->mass = mass;
	this->type = 2;
	this->state = state;
	setSize(x, y, z);
}
float* Package::getSize() {
	float sizes[3];
	sizes[0] = x;
	sizes[1] = y;
	sizes[2] = z;
	return sizes;
}
void Package::setSize(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
Package::Package(const Package& temp) {
	this->number = temp.number;
	this->fromcountry = temp.fromcountry;
	this->fromcity = temp.fromcity;
	this->fromadress = temp.fromadress;
	this->fromindex = temp.fromindex;
	this->country = temp.country;
	this->city = temp.city;
	this->adress = temp.adress;
	this->index = temp.index;
	this->from = temp.from;
	this->to = temp.to;
	this->phonenumber = temp.phonenumber;
	this->mass = temp.mass;
	this->type = temp.type;
	this->state = temp.state;
	this->x = temp.x;
	this->y = temp.y;
	this->z = temp.z;
}
Transmission* Package::copy() {
	return new Package(*this);
}

bool Comp::operator() (Transmission* a, Transmission* b) const {
	std::wstring t1 = a->getNumber(), t2 = b->getNumber();
	std::string temp1, temp2;
	std::transform(t1.begin(), t1.end(), std::back_inserter(temp1), [](wchar_t c) { return (char)c; });
	std::transform(t2.begin(), t2.end(), std::back_inserter(temp2), [](wchar_t c) { return (char)c; });
	return t1 < t2;
}

DB::DB() {
	mails = new std::set<Transmission*, Comp>;
	packages = new std::set<Transmission*, Comp>;
	std::wstring number = L"";
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
	float x, y, z;
	std::wifstream file("mails.txt");
	file.imbue(loc);
	for (; file.is_open() && !file.eof();) {
		number = L"";
		file >> number >> fromcountry >> fromcity >> fromadress >> fromindex >> country >> city >> adress >> index >> from >> to >> phonenumber >> mass >> state;
		fromadress = regex_replace(fromadress, std::wregex(L"_"), L" ");
		adress = regex_replace(adress, std::wregex(L"_"), L" ");
		from = regex_replace(from, std::wregex(L"_"), L" ");
		to = regex_replace(to, std::wregex(L"_"), L" ");
		state = regex_replace(state, std::wregex(L"_"), L" ");
		if (number != L"")
			mails->insert(new Mail(number, fromcountry, fromcity, fromadress, fromindex, country, city, adress, index, from, to, phonenumber, mass, state));
	}
	file.close();
	file = std::wifstream("packages.txt");
	file.imbue(loc);
	for (; file.is_open() && !file.eof();) {
		number = L"";
		file >> number >> fromcountry >> fromcity >> fromadress >> fromindex >> country >> city >> adress >> index >> from >> to >> phonenumber >> mass >> state >> x >> y >> z;
		fromadress = regex_replace(fromadress, std::wregex(L"_"), L" ");
		adress = regex_replace(adress, std::wregex(L"_"), L" ");
		from = regex_replace(from, std::wregex(L"_"), L" ");
		to = regex_replace(to, std::wregex(L"_"), L" ");
		state = regex_replace(state, std::wregex(L"_"), L" ");
		if (number != L"")
			packages->insert(new Package(number, fromcountry, fromcity, fromadress, fromindex, country, city, adress, index, from, to, phonenumber, mass, state, x, y, z));
	}
	file.close();
};
DB::~DB() {
	saveFile();
	for (std::set<Transmission*, Comp>::iterator it = mails->begin(); it != mails->end(); ++it) {
		delete* it;
	}
	for (std::set<Transmission*, Comp>::iterator it = packages->begin(); it != packages->end(); ++it) {
		delete* it;
	}
	delete mails;
	delete packages;
}
DB::DB(const DB& temp) {
	mails = new std::set<Transmission*, Comp>;
	packages = new std::set<Transmission*, Comp>;
	for (std::set<Transmission*, Comp>::iterator i = temp.mails->begin(); i != temp.mails->end(); ++i) {
		mails->insert((*i)->copy());
	}
	for (std::set<Transmission*, Comp>::iterator i = temp.packages->begin(); i != temp.packages->end(); ++i) {
		packages->insert((*i)->copy());
	}
};
DB& DB::operator=(const DB& temp) {
	if (this != &temp) {
		for (std::set<Transmission*, Comp>::iterator it = mails->begin(); it != mails->end(); ++it) {
			delete* it;
		}
		for (std::set<Transmission*, Comp>::iterator it = packages->begin(); it != packages->end(); ++it) {
			delete* it;
		}
		mails->clear();
		packages->clear();
		delete mails;
		delete packages;
		mails = new std::set<Transmission*, Comp>;
		packages = new std::set<Transmission*, Comp>;
		for (std::set<Transmission*, Comp>::iterator i = temp.mails->begin(); i != temp.mails->end(); ++i) {
			mails->insert((*i)->copy());
		}
		for (std::set<Transmission*, Comp>::iterator i = temp.packages->begin(); i != temp.packages->end(); ++i) {
			packages->insert((*i)->copy());
		}
	}
	return *this;
};
void DB::saveFile() {
	std::wofstream file("mails.txt", std::wofstream::trunc);
	file.imbue(loc);
	for (std::set<Transmission*, Comp>::iterator i = mails->begin(); i != mails->end(); ++i) {
		file << (*i)->getNumber() << " " << (*i)->getFromCountry() << " " << (*i)->getFromCity() << " " << regex_replace((*i)->getFromAdress(), std::wregex(L" "), L"_") << " " << (*i)->getFromIndex() << " " << (*i)->getCountry() << " " << (*i)->getCity() << " " << regex_replace((*i)->getAdress(), std::wregex(L" "), L"_") << " " << (*i)->getIndex() << " " << regex_replace((*i)->getFrom(), std::wregex(L" "), L"_") << " " << regex_replace((*i)->getTo(), std::wregex(L" "), L"_") << " " << (*i)->getPhoneNumber() << " " << (*i)->getMass() << " " << regex_replace((*i)->getState(), std::wregex(L" "), L"_");
		file << std::endl;
	}
	file.close();
	file = std::wofstream("packages.txt", std::wofstream::trunc);
	file.imbue(loc);
	for (std::set<Transmission*, Comp>::iterator i = packages->begin(); i != packages->end(); ++i) {
		float* h = (*i)->getSize();
		file << (*i)->getNumber() << " " << (*i)->getFromCountry() << " " << (*i)->getFromCity() << " " << regex_replace((*i)->getFromAdress(), std::wregex(L" "), L"_") << " " << (*i)->getFromIndex() << " " << (*i)->getCountry() << " " << (*i)->getCity() << " " << regex_replace((*i)->getAdress(), std::wregex(L" "), L"_") << " " << (*i)->getIndex() << " " << regex_replace((*i)->getFrom(), std::wregex(L" "), L"_") << " " << regex_replace((*i)->getTo(), std::wregex(L" "), L"_") << " " << (*i)->getPhoneNumber() << " " << (*i)->getMass() << " " << regex_replace((*i)->getState(), std::wregex(L" "), L"_") << " " << h[0] << " " << h[1] << " " << h[2];
		file << std::endl;
	}
	file.close();
}
void CFunctions::getAll(int& size, int* (&types), int* (&fromindexes), int* (&indexes), float* (&masses), wchar_t*** (&str), std::wstring filter, int number) {
	std::locale::global(std::locale(""));
	std::transform(filter.begin(), filter.end(), filter.begin(), towlower);
	std::set<Transmission*, Comp> all;
	std::set_union(db->mails->begin(), db->mails->end(), db->packages->begin(), db->packages->end(), std::inserter(all, all.begin()), Comp());
	size = db->mails->size() + db->packages->size();
	types = new int[size];
	fromindexes = new int[size];
	indexes = new int[size];
	masses = new float[size];
	str = new wchar_t** [size];
	int j = 0;
	for (std::set<Transmission*, Comp>::iterator i = all.begin(); i != all.end(); ++i) {
		str[j] = new wchar_t* [12];
		for (int k = 0; k < 12; ++k) str[j][k] = new wchar_t[1024];
		wcscpy_s(str[j][0], 1024, (*i)->getNumber().c_str());
		wcscpy_s(str[j][1], 1024, (*i)->getFromCountry().c_str());
		wcscpy_s(str[j][2], 1024, (*i)->getFromCity().c_str());
		wcscpy_s(str[j][3], 1024, (*i)->getFromAdress().c_str());
		wcscpy_s(str[j][4], 1024, (*i)->getCountry().c_str());
		wcscpy_s(str[j][5], 1024, (*i)->getCity().c_str());
		wcscpy_s(str[j][6], 1024, (*i)->getAdress().c_str());
		wcscpy_s(str[j][7], 1024, (*i)->getFrom().c_str());
		wcscpy_s(str[j][8], 1024, (*i)->getTo().c_str());
		wcscpy_s(str[j][9], 1024, (*i)->getPhoneNumber().c_str());
		wcscpy_s(str[j][10], 1024, (*i)->getState().c_str());
		if ((*i)->getType() == 2) {
			float* sizes = (*i)->getSize();
			std::wstring s = std::to_wstring((int) (sizes[0] + 0.5)) + L"x" + std::to_wstring((int)(sizes[1] + 0.5)) + L"x" + std::to_wstring((int)(sizes[2] + 0.5));
			wcscpy_s(str[j][11], 1024, s.c_str());
		}
		else {
			wcscpy_s(str[j][11], 1024, L"");
		}
		fromindexes[j] = (*i)->getFromIndex();
		indexes[j] = (*i)->getIndex();
		masses[j] = (*i)->getMass();
		types[j] = (*i)->getType();
		j++;
	}
	size = j;
}

CFunctions::CFunctions() {
	db = new DB();
}

CFunctions* CFunctions::getInstance() {
	if (!instance)
		instance = new CFunctions();
	return instance;
}
CFunctions::~CFunctions() {
	delete db;
};

CFunctions* CFunctions::instance = 0;
