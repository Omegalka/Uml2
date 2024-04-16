#include <iostream>
#include <string>

using namespace std;

class WarehouseOperatorInterface {
public:
    virtual void AddProduct() = 0;
    virtual void EditProduct() = 0;
    virtual void DeleteProduct() = 0;
};

class WarehouseManagerInterface {
public:
    virtual void ViewStock() = 0;
    virtual void ManageStock() = 0;
};

class PickerInterface {
public:
    virtual void ViewPickedProducts() = 0;
    virtual void MarkProductAsPicked() = 0;
};

class Operator : public WarehouseOperatorInterface {
public:
    void AddProduct() override {
        cout << "Operator adds a product ";
    }

    void EditProduct() override {
        cout << "Operator edits a product ";
    }

    void DeleteProduct() override {
        cout << "Operator deletes a product ";
    }
};

class Manager : public WarehouseManagerInterface {
public:
    void ViewStock() override {
        cout << "Manager views the stock ";
    }

    void ManageStock() override {
        cout << "Manager manages the stock ";
    }
};

class Picker : public PickerInterface {
public:
    void ViewPickedProducts() override {
        cout << "Picker views picked products ";
    }

    void MarkProductAsPicked() override {
        cout << "Picker marks product as picked ";
    }
};

class OperatorManager : public WarehouseOperatorInterface, public WarehouseManagerInterface {
public:
    void AddProduct() override {
        cout << "OperatorManager adds a product ";
    }

    void EditProduct() override {
        cout << "OperatorManager edits a product ";
    }

    void DeleteProduct() override {
        cout << "OperatorManager deletes a product ";
    }

    void ViewStock() override {
        cout << "OperatorManager views the stock ";
    }

    void ManageStock() override {
        cout << "OperatorManager manages the stock ";
    }
};

class OperatorPicker : public WarehouseOperatorInterface, public PickerInterface {
public:
    void AddProduct() override {
        cout << "OperatorPicker adds a product ";
    }

    void EditProduct() override {
        cout << "OperatorPicker edits a product ";
    }

    void DeleteProduct() override {
        cout << "OperatorPicker deletes a product ";
    }

    void ViewPickedProducts() override {
        cout << "OperatorPicker views picked products ";
    }

    void MarkProductAsPicked() override {
        cout << "OperatorPicker marks product as picked ";
    }
};

class ManagerPicker : public WarehouseManagerInterface, public PickerInterface {
public:
    void ViewStock() override {
        cout << "ManagerPicker views the stock ";
    }

    void ManageStock() override {
        cout << "ManagerPicker manages the stock ";
    }

    void ViewPickedProducts() override {
        cout << "ManagerPicker views picked products ";
    }

    void MarkProductAsPicked() override {
        cout << "ManagerPicker marks product as picked ";
    }
};

int main() {
    Operator op;
    Manager mn;
    Picker pk;
    OperatorManager opmn;
    OperatorPicker oppk;
    ManagerPicker mnpk;

    cout << "Operator actions: ";
    op.AddProduct();
    op.EditProduct();
    op.DeleteProduct();
    cout << endl;

    cout << "\nManager actions: ";
    mn.ViewStock();
    mn.ManageStock();
    cout << endl;

    cout << "\nPicker actions: ";
    pk.ViewPickedProducts();
    pk.MarkProductAsPicked();
    cout << endl;

    cout << "\nOperatorManager actions: ";
    opmn.AddProduct();
    opmn.EditProduct();
    opmn.DeleteProduct();
    opmn.ViewStock();
    opmn.ManageStock();
    cout << endl;

    cout << "\nOperatorPicker actions: ";
    oppk.AddProduct();
    oppk.EditProduct();
    oppk.DeleteProduct();
    oppk.ViewPickedProducts();
    oppk.MarkProductAsPicked();
    cout << endl;

    cout << "\nManagerPicker actions: ";
    mnpk.ViewStock();
    mnpk.ManageStock();
    mnpk.ViewPickedProducts();
    mnpk.MarkProductAsPicked();
    cout << endl;

    return 0;
}
