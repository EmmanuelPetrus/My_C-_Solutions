#ifndef INVOICE_H
#define INVOICE_H
#include "Product.h"

class Invoice
{
private:
    int invoiceNumber;
    double invoiceTotal;

public:
    Invoice(int invoiceNumber);
    ~Invoice();
    void add(int quantity, Product product);
    void print() const;
};

#endif