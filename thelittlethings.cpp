#include <iostream>
#include <optional>
#include <random>
#include <map>
#include <ctime>
#include <vector>
#include <numeric>
#include <string>
template<typename flexible>
void give(flexible i) {
    std::cout << i;
}
void get(flexible& i, std::optional<std::string> o) {
    if (o) {
        std::cout << *o;
    }
    std::cin >> i;
}
void givebool(bool i) {
    if (i) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }
}
std::string as_str(flexible i) {
    return std::to_string(i);
}
void vectorappend(std::vector<flexible>& v, flexible i) {
    v.push_back(i);
}
void end() {
    std::cout << std::endl;
}
int randint(int i) {
    return rand() % i;
}
V mapfind(const std::map<K, V>& map, const K& item) {
    auto it = map.find(item);
    if (it != map.end()) {
        return it->second;
    } else {
        return V();
    }
}
int as_int(flexible i) {
    return static_cast<int>(i);
}
bool as_bool(flexible i) {
    return static_cast<bool>(i);
}
double sigma(const std::vector<double>& vec) {
    return std::accumulate(vec.begin(), vec.end(), 0.0);
}
flexible randchoice(const std::vector<flexible>& vec) {
    if (vec.empty()) {
        throw std::runtime_error("Cannot choose from an empty vector");
    }
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, vec.size() - 1);
    return vec[dis(gen)];
}
std::vector<double> range(l, h) {
	std::vector<double> r;
	for (int i = l; i <= h; i++) {
		r.push_back(i);
		return r;
		}
}