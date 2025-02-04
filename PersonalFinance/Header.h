#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <conio.h>

void start();

// прототипы перегрузок цветной печати
inline std::ostream& blue(std::ostream& s);
inline std::ostream& red(std::ostream& s);
inline std::ostream& green(std::ostream& s);
inline std::ostream& yellow(std::ostream& s);
inline std::ostream& white(std::ostream& s);
inline std::ostream& invert_white(std::ostream& s);
inline std::ostream& aqua(std::ostream& s);
struct color;
template <class _Elem, class _Traits>
std::basic_ostream<_Elem, _Traits>&
operator<<(std::basic_ostream<_Elem, _Traits>& i, color& c);
