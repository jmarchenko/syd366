Purchase.h

class Purchase {
private:
    int identifier;
    float purchaseTotal;
    float tax;
    float extendedPrice;
    int quantity;
    string date;

    Supplier supplier;
    Receipt receipt;
    Product product;

public:
    Purchase();
    void create();
    void setDate(const string& date);
    void setDescription(const string& description);
    void setAmount(float amount);
    void setID(int ID);
   vector<Purchase> getPurchases() const;
};

Product.h 
class Product {
private:
    int productID;
    string name;
    string description;
    float price;
    int identifier;
    string ingredients;
    string precautions;
    string location;

    ProductType productType;

public:
    Product();
    void setProductID(int id);
    void setName(const string& name);
    void setDescription(const string& description);
    void setPrice(float price);
    void setIngredients(const string& ingredients);
    void setPrecautions(const string& precautions);
    void setLocation(const string& location);
    int getProductID() const;
    std::string getName() const;
    float getPrice() const;
};

Supplier.h
class Supplier {
private:
    int supplierID;
    string name;
    string phone;
    string email;
    string address;

public:
    Supplier();
    void setSupplierID(int id);
    void setName(const string& name);
    void setPhone(const string& phone);
    void setEmail(const string& email);
    void setAddress(const string& address);
    int getSupplierID() const;
    string getName() const;
};

Reciept.h
class Receipt {
private:
    string location;
    string date;

public:
    Receipt();
    void setLocation(const string& location);
    void setDate(const string& date);
    string getLocation() const;
    string getDate() const;
};

ProductType.h
class ProductType {
private:
    int productTypeID;
    string productTypeDesc;

public:
    ProductType();
    void setProductTypeID(int id);
    void setProductTypeDesc(const string& description);
    int getProductTypeID() const;
    string getProductTypeDesc() const;
};

UIController.h 
public class UIController {
    addProduct()
    getProducts()
    addPurchases()
    getPurchases()
    selectProductTypes()
    enterProduct(name,description,identifier,ingredients,precautions)
    enterProduct(price,quantity)
    enterPurchases(date,reciept,supplierID)
    getDataRange(startDate,endDate)
    cancel()
    save()
}

DomainController.h 
public class DomainController {
   float calculate()
   float calculate(price*quantity)
   float calculate(extendedPrice+tax)
   int identifier()
   getProductTypes()
   getProducts()
   getSupplier()
   enterPurchase(date,receipt,supplierID)
   selectProductTypes()
   enterProduct(name,description,identifier,ingredients,precautions)
   enterProduct(price,quantity)
   save()
   getDataRange(startDate,endDate)
}

EntityManager.h 
public class EntityManager {
    persist(object)
    get(class,selection)
}