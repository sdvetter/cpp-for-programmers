#include <string>
#include <iostream>
using namespace std; 

const double tax = 1.15; 
class Commodity
{
    public: 
    Commodity(double price_, int id, string name_);

    string get_name();
    int get_id() const;
    double get_price(double quant) const;
    double get_price() const;
    void set_price(double newPrice);
    double get_price_with_sales_tax(double quant);

    private: 
    int id; 
    double price; 
    string name; 
};


Commodity::Commodity(double price_, int id_, string name_) : price(price_), id(id_), name(name_){
}

string Commodity::get_name(){
    return name; 
}

int Commodity::get_id() const {
    return id; 
}

double Commodity::get_price(double quant) const {
    return price * quant;
}

double Commodity::get_price() const {
    return price;
}   

void Commodity::set_price(double newPrice){
    price = newPrice; 
} 

double Commodity::get_price_with_sales_tax(double quant){
    return price * tax * quant; 
}


int main() {
  const double quantity = 2.5;
  Commodity commodity(73.50, 123, "Norvegia");

  cout << "Varenavn: " << commodity.get_name() << ", varenr: " << commodity.get_id() << " Pris pr enhet: " << commodity.get_price() << endl;

  cout << "Kilopris: " << commodity.get_price() << endl;
  cout << "Prisen for " << quantity << " kg er " << commodity.get_price(quantity) << " uten moms" << endl;
  cout << "Prisen for " << quantity << " kg er " << commodity.get_price_with_sales_tax(quantity) << " med moms" << endl;

  commodity.set_price(79.60);
  cout << "Ny kilopris: " << commodity.get_price() << endl;
  cout << "Prisen for " << quantity << " kg er " << commodity.get_price(quantity) << " uten moms" << endl;
  cout << "Prisen for " << quantity << " kg er " << commodity.get_price_with_sales_tax(quantity) << " med moms" << endl;
}