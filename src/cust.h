//
// Created by joshru on 9/26/17. Move semantics talk
//

#ifndef CPPCON17_CUST_H
#define CPPCON17_CUST_H

#include <string>
#include <type_traits>

class Cust {

public:
    Cust(std::string f, std::string l = "", int i = 0) // 11 calls to malloc (4cr + 7cp + 1mv)
            : first(f), last(l), id(i) { /* EMPTY */ } // one const char* overload

//
//    Cust(std::string f, std::string l = "", int i = 0) // 5 calls to malloc (4cr + 1cp + 5mv)
//            : first(std::move(f)), last(std::move(l)), id(i) { /* EMPTY */ } // one const char* overload


    // 5 calls to malloc (4cr + 1cp + 1mv)
//    Cust(const std::string& f, const std::string&, int i = 0);
//    Cust(const std::string& f, std::string&& l = "", int i = 0);
//    Cust(const std::string& f, const char* l, int i = 0);
//    Cust(const std::string&& f, const std::string&, int i = 0);

//    template<typename S1, typename S2 = std::string, typename = std::enable_if<std::is_convertible<S1, std::string>>>
//            Cust(S1&& f, S2&& l = "", int i = 0)
//                    : first(std::forward<S1>(f)), last(std::forward<S2>(l)), id(i) { /* EMPTY */ };



private:
    std::string first;
    std::string last;
    int id;


};

#endif //CPPCON17_CUST_H
