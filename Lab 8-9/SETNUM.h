#pragma once
#include <cstdio>

class SETNUM //����� ��������� �����
{
private:
	int size;
	int* x;
	void Init(int z);
	int Element(int z) const;
	void AddSort(int k, int z);
	void DelSort(int k, int z);

public:
	//Lab 8 �������� ������
	SETNUM(); //����������� ��� ����������
	SETNUM(int z); //����������� � ����� ����������-������
	SETNUM(const SETNUM& set, int z = 1000); //����������� �����������
	void Output() const;
	bool Contains(int z) const;
	void AddElement(int z = 0);
	void DeleteElement(int z = 0);
	explicit operator int() const; //������������� �������
	~SETNUM(); //����������
	SETNUM Union(const SETNUM& other) const;
	SETNUM Intersection(const SETNUM& other) const;
	SETNUM Difference(const SETNUM& other) const;

	//Lab 9 ���������� ��������
	SETNUM& operator += (int z);
	SETNUM& operator -= (int z);
	SETNUM& operator = (const SETNUM& other);
	SETNUM operator + (const SETNUM& other) const;
	SETNUM operator - (const SETNUM& other) const;
	SETNUM operator * (const SETNUM& other) const;
	bool operator == (const SETNUM& other) const;
};