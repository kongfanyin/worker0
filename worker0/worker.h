#pragma once
#ifndef WORK_H_
#define WORK_H_

#include<iostream>
#include<string>
using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::ios_base;

class Worker
{
private:
	string FullName;
	long id;
public:
	Worker():FullName("null"),id(0l){}
	Worker(const string& s, long n) :FullName(s), id(n){}
	virtual void set();
	virtual ~Worker()=0;
	virtual void show()const;	
};
class waiter :public Worker
{
private:
	int panache;
public:
	waiter() :Worker(), panache(0) {}
	waiter(const string &s, long n, int p = 0) :Worker(s, n), panache(p) {}
	waiter(const Worker& wk, int p = 0) :Worker(wk), panache(p) {}
	void show()const;
	void set();
};

class singer :public Worker
{

protected:
	enum 
	{
		other,alto,contralto,soparano,bass,baritone,tenor
	};
	enum 
	{
		Vtypes=7
	};
private:
	static const char* pv[Vtypes];
	int voice;
public:
	singer():Worker(),voice(other){}
	singer(const string &s,long n,int v=other):Worker(s,n),voice(v){}
	singer(const Worker &w,int v=other):Worker(w),voice(v){}
	void set();
	void show()const;
};
#endif // !WORK_H_
