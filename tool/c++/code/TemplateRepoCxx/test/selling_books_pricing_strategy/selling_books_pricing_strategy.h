#include <iostream>
#include <memory>
#include <string>
#include <ostream>

class Quote      //作为基类，表示按原价销售的书籍，负责定义在层次关系中所有类共同拥有的成员
{
    public:
        Quote() = default;
        Quote(const std::string &book, double sales_price): m_strBoolNo(book), price(sales_price){};
        std::string isbn()const{return m_strBoolNo;};
        virtual double net_price(size_t num_books) const{return num_books * price;};
        virtual ~Quote() = default;
    private:
        std::string m_strBoolNo;
    protected:
        double price = 0.0; 
};

class Bulk_quote: public Quote      //作为派生类，表示可以打折销售的书籍
{
    public:
        Bulk_quote() = default;
        Bulk_quote(const std::string& book, double p, std::size_t qty, double disc): Quote(book, p), min_qty(qty), discount(disc){};
        double net_price(size_t num_books) const override
        {
            if (num_books >= min_qty)
            {
                return num_books * (1 - discount) * price;
            }
            else
            {
                return num_books * price;
            }
        }
    private:
        std::size_t min_qty = 0;            //适用折扣策略的最低购买量
        double discount = 0.0;              //以小数表示的折扣额,按照百分比
};


