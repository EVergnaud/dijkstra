//InsertEnd.h
#pragma once


template <class T, class U>
void InsertEnd(T& t,U u)  //insert u at the end of t
{
	t.insert(t.end(),u);
}