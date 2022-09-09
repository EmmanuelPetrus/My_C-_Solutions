#include "Invoice.h"

Invoice::Invoice(int invNum) : invoiceNumber(invNum), invoiceTotal(0.0)
{
}
Invoice::~Invoice()
{
}

void Invoice::add(int quantity, Product product)
{
    invoiceTotal += quantity * product.getPrice();
}

void Invoice::print() const
{
    cout << "Invoice Number: " << invoiceNumber << endl;
    cout << "Invoice Total: " << invoiceTotal << endl;
}
