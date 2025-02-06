#ifndef THELITTLETHINGS_HPP
#define THELITTLETHINGS_HPP
#include <iostream>
#include <optional>
#include <map>
#include <vector>
#include <string>
template<typename flexible>
void give(flexible i);
void get(std::optional<std::string> o, flexible& i);
void givebool(bool i);
std::string as_str(flexible i);
void vectorappend(std::vector<flexible>& v, flexible i);
void end();
int randint(int i);
template<typename K, typename V>
V mapfind(const std::map<K, V>& map, const K& item);
int as_int(flexible i);
bool as_bool(flexible i);
double sigma(const std::vector<double>& vec);
flexible randchoice(const std::vector<flexible>& vec);
#endif
