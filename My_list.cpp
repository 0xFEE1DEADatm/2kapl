#pragma once
#include <iostream>
#include <fstream>
#include "Apartment.h"

using TInfo = Apartment;

struct NODE
{
	TInfo info;
	NODE* next, * prev;
	NODE(TInfo info, NODE* next = nullptr, NODE* prev = nullptr) :info(info), next(next), prev(prev) {}
	~NODE()
	{
		next = nullptr;
		prev = nullptr;
	}
};

using ptrNODE = NODE*;

struct DLIST
{
private:
	ptrNODE begin, end;
public:
	DLIST()
	{
		begin = nullptr;
		end = nullptr;
	}
	DLIST(const char* file_name);
	void first_node(const Apartment& stud);
	bool empty();
	void add_before(ptrNODE ptr, const Apartment& stud);
	void add_after(ptrNODE ptr, const Apartment& stud);
	void print();
	Apartment& True(ptrNODE& ptr);
	ptrNODE get_begin()
	{
		return begin;
	}
	~DLIST();
};
