#pragma once
#include "NhanVien.h"
class NhanVienBC: public NhanVien
{
private:
	double fixed_salary;
public:
	NhanVienBC();
	NhanVienBC(string, string, string, double salary):id(id), fullname(name), taxcode(tax),fixed(salary)
	{}
	//setters
	void setFixedsalary(double salary)
	{
		this->salary=salary;
	}
	//getters
	double getFixedsalary()const
	{
		return this->fixed;
	}
	double getSalary()const
	{
		return this->fixed_salary;
	}
	~NhanVienBC();
};
