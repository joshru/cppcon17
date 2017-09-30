//
// Created by joshru on 9/25/17.
//

#include <iostream>
#include <string>
#include <experimental/string_view>
#include <experimental/optional>
#include "cust.h"

using namespace std::experimental;

template<class T>
void wrapper(T&& arg) {
    std::forward<T>(arg);
}

auto optional_params(string_view str, const optional<int>& start, const optional<int>& end) {
    auto s = start.value_or(0);
    auto e = end.value_or(str.size());
    std::cout << "String: " << str << " Opt 1: " << start.value_or(0) << " Opt 2: " << end.value_or(0) << std::endl;
}


auto auto_return() {
    return 44; //neat
}

int main() {
    std::cout << auto_return() << std::endl;

    std::experimental::string_view tests = "Yeah Mr. White! EXPERIMENTAL!";
    std::cout << tests << std::endl;

    // std::optional examples
    optional_params("test with provided optionals: ", 4, 5);
    optional_params("test without provided optionals: ", nullopt, nullopt);

    Cust test {"hello", "world", 2};

    return 0;
}