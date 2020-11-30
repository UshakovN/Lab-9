#pragma once
#include <cstdio>

class SETNUM //Класс множество чисел
{
private:
	int size;
	int* x;
	void Init(int z);
	int Element(int z) const;
	void AddSort(int k, int z);
	void DelSort(int k, int z);

public:
	//Lab 8 Создание класса
	SETNUM(); //Конструктор без параметров
	SETNUM(int z); //Конструктор с одним параметром-числом
	SETNUM(const SETNUM& set, int z = 1000); //Конструктор копирования
	void Output() const;
	bool Contains(int z) const;
	void AddElement(int z = 0);
	void DeleteElement(int z = 0);
	explicit operator int() const; //Преобразующая функция
	~SETNUM(); //Деструктор
	SETNUM Union(const SETNUM& other) const;
	SETNUM Intersection(const SETNUM& other) const;
	SETNUM Difference(const SETNUM& other) const;

	//Lab 9 Перегрузка операций
	SETNUM& operator += (int z);
	SETNUM& operator -= (int z);
	SETNUM& operator = (const SETNUM& other);
	SETNUM operator + (const SETNUM& other) const;
	SETNUM operator - (const SETNUM& other) const;
	SETNUM operator * (const SETNUM& other) const;
	bool operator == (const SETNUM& other) const;
};