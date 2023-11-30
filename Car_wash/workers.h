#pragma once
#include <iostream>
#include <string>
class WorkerList {
private:
	std::string Namef;
	std::string Names;
	std::string Namet;
    int Work_amount = 1;
public:
	WorkerList() {
		Namef = "";
		Names = "";
		Namet = "";
	}

	WorkerList(const std::string& Namefst, const std::string& Namesec, const std::string& Nameth, int Work_amount): Namef(Namefst), Names(Namesec), Namet(Nameth), Work_amount(Work_amount){}

	void SetNames(std::string Namefst) {
		Namef = Namefst;
		Work_amount = 1;
	}
	void SetNames(std::string Name1, std::string Name2) {
		Namef = Name1;
		Names = Name2;
		Work_amount = 2;
	}
	void SetNames(std::string Name1, std::string Name2, std::string Name3 ) {
		Namef = Name1;
		Names = Name2;
		Namet = Name3;
		Work_amount = 3;
	}

	std::string GetName1() const{
		return Namef;
	}
	std::string GetName2() const {
		return Names;
	}
	std::string GetName3() const {
		return Namet;
	}

	int GetAmount()const {
		return Work_amount;
	}
};