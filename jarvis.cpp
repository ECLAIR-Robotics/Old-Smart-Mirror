#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httplib.h"
#include <iostream>
#include <nlohmann/json.hpp>

using namespace nlohmann;

int main() {
    httplib::Client cli("https://dog.ceo");
    auto res = cli.Get("/api/breeds/image/random");
    std::cout << res->body << std::endl;
    std::cout << res->status;
}
