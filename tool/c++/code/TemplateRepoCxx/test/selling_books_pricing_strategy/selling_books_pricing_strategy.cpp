#include <iostream>
#include <memory>
#include <string>
#include "selling_books_pricing_strategy.h"
using namespace std;

double print_total(const shared_ptr<Quote> item, size_t n)
{
    double ret = item->net_price(n);    
    cout << "ISBN: " << item->isbn() << " # sold: " << n << " total due: " << ret << std::endl;
    return ret;
}

int main()
{
    shared_ptr<Quote> item = make_shared<Quote>("9787020002207", 200.1);
    print_total(item, 200);
    shared_ptr<Bulk_quote> bulk = make_shared<Bulk_quote>("9787020002207", 200.1, 20, .19);
    print_total(bulk, 200);
    return 0;
}