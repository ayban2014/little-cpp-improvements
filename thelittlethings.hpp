#ifndef THELITTLETHINGS_HPP
#define THELITTLETHINGS_HPP
#include <iostream>
#include <optional>
#include <random>
#include <map>
#include <ctime>
#include <vector>
#include <numeric>
#include <string>
#include <cmath>
#include <utility>
template<typename flexible>
void give(flexible i);
void get(std::optional<std::string> o, flexible& i);
void givebool(std::pair<bool, int> i);
template<typename flexible>
std::string as_str(flexible i);
template<typename flexible>
void vectorappend(std::vector<flexible>& v, flexible i);
template<typename flexible>
void end();
template<typename flexible>
int randint(int i);
template<typename flexible>
template<typename K, typename V>
V mapfind(const std::map<K, V>& map, const K& item);
template<typename flexible>
int as_int(flexible i);
template<typename flexible>
bool as_bool(flexible i);
template<typename flexible>
double sigma(const std::vector<double>& vec);
template<typename flexible>
flexible randchoice(const std::vector<flexible>& vec);
template<typename flexible>
std::vector<double> range(l, h);
template<typename flexible>
std::vector<double> pmtde(double n1, double n2);
#endif
