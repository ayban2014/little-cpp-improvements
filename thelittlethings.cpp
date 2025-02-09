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
void give(flexible i) {
    std::cout << i;
}
template<typename flexible>
void get(flexible& i, std::optional<std::string> o) {
    if (o) {
        std::cout << *o;
    }
    std::cin >> i;
}
template<typename flexible>
void givebool(std::pair<bool,int> i) {
    if (i or i == 1) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }
}
template<typename flexible>
std::string as_str(flexible i) {
    return std::to_string(i);
}
template<typename flexible>
void vectorappend(std::vector<flexible>& v, flexible i) {
    v.push_back(i);
}
template<typename flexible>
void end() {
    std::cout << std::endl;
}
template<typename flexible>
int randint(int i) {
    return rand() % i+1;
}
template<typename flexible>
template<typename K, typename V>
V mapfind(const std::map<K, V>& map, const K& item) {
    auto it = map.find(item);
    if (it != map.end()) {
        return it->second;
    } else {
        return V();
    }
}
template<typename flexible>
int as_int(flexible i) {
    return static_cast<int>(i);
}
template<typename flexible>
bool as_bool(flexible i) {
    return static_cast<bool>(i);
}
template<typename flexible>
double sigma(const std::vector<double>& vec) {
    return std::accumulate(vec.begin(), vec.end(), 0.0);
}
template<typename flexible>
flexible randchoice(const std::vector<flexible>& vec) {
    if (vec.empty()) {
        throw std::runtime_error("Cannot choose from an empty vector");
    }
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, vec.size() - 1);
    return vec[dis(gen)];
}
template<typename flexible>
std::vector<double> range(l, h) {
	std::vector<double> r;
	for (int i = l; i <= h; i++) {
		r.push_back(i);
	}
	return r;
}
template<typename flexible>
std::vector<double> pmtde(double n1, double n2) {
	return {n1+n2, n1-n2, n1*n2, n1/n2, pow(n1, n2)};
}
