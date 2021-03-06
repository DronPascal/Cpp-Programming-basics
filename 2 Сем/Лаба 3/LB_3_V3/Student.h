#pragma once

struct Student
{
	std::string Name, Group;
	double		AvrMark;
	friend std::ostream& operator<<(std::ostream &p_out, const Student &stud)
	{
		p_out << "\n	Name: " << stud.Name << "	Group: " << stud.Group << "	Average mark: " << stud.AvrMark;
		return p_out;
	}
	friend std::istream& operator>>(std::istream &p_in, Student &stud)
	{
		std::cout << "������� ���: ";
		p_in >> stud.Name;
		std::cout << "������� ������: ";
		p_in >> stud.Group;
		std::cout << "������� ������� ����: ";
		p_in >> stud.AvrMark;
		std::cout << std::endl;
		return p_in;
	}
	void operator=(const Student &stud)
	{
		Name = stud.Name;
		Group = stud.Group;
		AvrMark = stud.AvrMark;
	}
	bool operator>(const Student &stud) const
	{
		return (AvrMark > stud.AvrMark);
	}
	bool operator<(const Student &stud) const
	{
		return (AvrMark < stud.AvrMark);
	}
};