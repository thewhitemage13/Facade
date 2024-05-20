#include <iostream>
using namespace std;

class ProviderCommunication {
public:
	void Receive() {
		cout << "Product receipt\n";
	}

	void Payment() {
		cout << "Payment to supplier with deduction of commission for sale of products" << "\n";
	}
};

class Site {
public:
	void Placement() {
		cout << "Website posting" << "\n";
	}
	void Del() {
		cout << "Deletion from the site" << "\n";
	}
};

class Database {
public:
	void Insert() {
		cout << "Database entry" << "\n";
	}
	void Del() {
		cout << "Database deletion" << "\n";
	}
};

class MarketPlace {
private:
	ProviderCommunication providerCom;
	Site site;
	Database database;
public:
	void ProductReceipt() {
		providerCom.Receive();
		site.Placement();
		database.Insert();
	}

	void ProductRelease() {
		providerCom.Payment();
		site.Del();
		database.Del();
	}
};

int main() {
	MarketPlace marketplace;
	marketplace.ProductReceipt();
	cout << "=======================================\n";
	marketplace.ProductRelease();
}