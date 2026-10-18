#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double UnitPrice(double Price, int Quantity) {
    return Price * Quantity;
}

void Trending_Items(string Product[], int price[]) {
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ". " << Product[i] << endl;
        cout << "Price: ₱" << price[i] << endl;
        cout << '\n';
    }
}

void Listing_Items(string Categories, string Product[], int Price[]) {
    cout << "Category: " << Categories << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << Product[i] << endl;
        cout << "Price: ₱" << Price[i] << endl;
        cout << '\n';
    }
}

void Budget_Entering(string Product[], int Price[], int Budget) {
    bool found = false;
    for (int i = 0; i < 25; i++) {
        if (Budget >= Price[i]) {
            cout << i + 1 << ". " << Product[i] << endl;
            cout << "Price: ₱" << Price[i] << endl;
            cout << '\n';
            found = true;
        }
    }

    if (!found) {
        cout << "None!" << endl;
    }
}

int main() {
    int Choose = 0;
    int T_Choose = 0, T_Quantity = 0, L_Choose = 0, Budget = 0;
    int L1_Choose = 0, L2_Choose = 0, L3_Choose = 0, L4_Choose = 0, L5_Choose = 0;
    int B_Choose = 0, L1_Quantity = 0, L2_Quantity = 0, L3_Quantity = 0, L4_Quantity = 0, L5_Quantity = 0, B_Quantity = 0;
    char A_Choose = 'Y';
    double sum = 0.00;

    string Trending_Product[] = {
        "High-end (ASUS ROG Zephyrus G14)",
        "Mid-range (Logitech MX Master 3S)",
        "High-end (AMD Ryzen 7 7800X3D)",
        "Premium (NVIDIA RTX 4070 Super)",
        "High-end (Apple iPad Air)",
        "Premium (Samsung S25)"
    };
    int Trending_Price[] = {107000, 6200, 26000, 36900, 36900, 49200};

    string Categories[] = {"Laptop", "Peripherals", "Printer", "PC-Parts", "Cellphone/Tablet"};

    string Laptop_Product[] = {
        "Budget (Acer Aspire 3)",
        "Value (Acer Chromebook Spin 714)",
        "Mid-range (Lenovo IdeaPad Slim 5)",
        "High-end (ASUS ROG Zephyrus G14)",
        "Premium (Dell Precision 5690)"
    };
    int Laptop_Price[] = {21500, 40000, 43000, 107000, 185000};

    string Peripherals_Product[] = {
        "Budget (Logitech M185 mouse)",
        "Value (Redragon K552 keyboard)",
        "Mid-range (Logitech MX Master 3S)",
        "High-end (CalDigit TS4 dock)",
        "Premium (Dell UltraSharp U2723QE monitor)"
    };
    int Peripherals_Price[] = {900, 2200, 6200, 24600, 37000};

    string Printer_Product[] = {
        "Budget (Canon PIXMA TS3520)",
        "Value (Brother HL-L2350DW)",
        "Mid-range (HP LaserJet MFP M234dw)",
        "High-end (Epson EcoTank ET-2850)",
        "Premium (Epson EcoTank Pro ET-5850)"
    };
    int Printer_Price[] = {3700, 8000, 12300, 15400, 40000};

    string PC_Parts_Product[] = {
        "Budget (AMD Ryzen 5 5600)",
        "Value (Corsair RM850x PSU)",
        "Mid-range (ASUS ROG Strix B650-E)",
        "High-end (AMD Ryzen 7 7800X3D)",
        "Premium (NVIDIA RTX 4070 Super)"
    };
    int PC_Parts_Price[] = {7400, 8600, 18450, 26000, 36900};

    string Tablet_CellPhone_Product[] = {
        "Budget (Amazon Fire HD 8)",
        "Value (Amazon Kindle Paperwhite)",
        "Mid-range (Google Pixel 9a)",
        "High-end (Apple iPad Air)",
        "Premium (Samsung S25)"
    };
    int Tablet_CellPhone_Price[] = {6200, 9800, 30800, 36900, 49200};

    string Products[] = {
        "Budget (Acer Aspire 3)", "Value (Acer Chromebook Spin 714)", "Mid-range (Lenovo IdeaPad Slim 5)", "High-end (ASUS ROG Zephyrus G14)",
        "Premium (Dell Precision 5690)", "Budget (Logitech M185 mouse)", "Value (Redragon K552 keyboard)", "Mid-range (Logitech MX Master 3S)",
        "High-end (CalDigit TS4 dock)", "Premium (Dell UltraSharp U2723QE monitor)", "Budget (Canon PIXMA TS3520)", "Value (Brother HL-L2350DW)",
        "Mid-range (HP LaserJet MFP M234dw)", "High-end (Epson EcoTank ET-2850)", "Premium (Epson EcoTank Pro ET-5850)", "Budget (AMD Ryzen 5 5600)",
        "Value (Corsair RM850x PSU)", "Mid-range (ASUS ROG Strix B650-E)", "High-end (AMD Ryzen 7 7800X3D)", "Premium (NVIDIA RTX 4070 Super)",
        "Budget (Amazon Fire HD 8)", "Value (Amazon Kindle Paperwhite)", "Mid-range (Google Pixel 9a)", "High-end (Apple iPad Air)", "Premium (Samsung S25)"
    };
    int Price[] = {21500, 40000, 43000, 107000, 185000, 900, 2200, 6200, 24600, 37000, 3700, 8000, 12300, 15400, 40000, 7400, 8600, 18450, 26000, 36900, 6200, 9800, 30800, 36900, 49200};

    do {
        cout << "<===============================================>" << endl;
        cout << "           Welcome to the Octagon Store!" << endl;
        cout << "<===============================================>" << endl;
        cout << "               Company Description" << endl;
        cout << "<===============================================>" << endl;
        cout << "                    Main Menu" << endl;
        cout << "                1. Trending Products" << endl;
        cout << "                2. Listed Items" << endl;
        cout << "                3. Budget Entering" << endl;
        cout << "Choose: ";
        cin >> Choose;
        cout << "<===============================================>" << endl;

        switch (Choose) {
            case 1:
                Trending_Items(Trending_Product, Trending_Price);
                cout << "Choose: ";
                cin >> T_Choose;
                cout << "Quantity: ";
                cin >> T_Quantity;
                sum += UnitPrice(Trending_Price[T_Choose - 1], T_Quantity);
                break;

            case 2:
                cout << "Listed Items" << endl;
                cout << "1. " << Categories[0] << endl;
                cout << "2. " << Categories[1] << endl;
                cout << "3. " << Categories[2] << endl;
                cout << "4. " << Categories[3] << endl;
                cout << "5. " << Categories[4] << endl;
                cout << "Choose: ";
                cin >> L_Choose;

                switch (L_Choose) {
                    case 1:
                        Listing_Items(Categories[0], Laptop_Product, Laptop_Price);
                        cout << "Choose: ";
                        cin >> L1_Choose;
                        cout << "Quantity: ";
                        cin >> L1_Quantity;
                        sum += UnitPrice(Laptop_Price[L1_Choose - 1], L1_Quantity);
                        break;

                    case 2:
                        Listing_Items(Categories[1], Peripherals_Product, Peripherals_Price);
                        cout << "Choose: ";
                        cin >> L2_Choose;
                        cout << "Quantity: ";
                        cin >> L2_Quantity;
                        sum += UnitPrice(Peripherals_Price[L2_Choose - 1], L2_Quantity);
                        break;

                    case 3:
                        Listing_Items(Categories[2], Printer_Product, Printer_Price);
                        cout << "Choose: ";
                        cin >> L3_Choose;
                        cout << "Quantity: ";
                        cin >> L3_Quantity;
                        sum += UnitPrice(Printer_Price[L3_Choose - 1], L3_Quantity);
                        break;

                    case 4:
                        Listing_Items(Categories[3], PC_Parts_Product, PC_Parts_Price);
                        cout << "Choose: ";
                        cin >> L4_Choose;
                        cout << "Quantity: ";
                        cin >> L4_Quantity;
                        sum += UnitPrice(PC_Parts_Price[L4_Choose - 1], L4_Quantity);
                        break;

                    case 5:
                        Listing_Items(Categories[4], Tablet_CellPhone_Product, Tablet_CellPhone_Price);
                        cout << "Choose: ";
                        cin >> L5_Choose;
                        cout << "Quantity: ";
                        cin >> L5_Quantity;
                        sum += UnitPrice(Tablet_CellPhone_Price[L5_Choose - 1], L5_Quantity);
                        break;

                    default:
                        cout << "Invalid Input" << endl;
                        break;
                }
                break;

            case 3:
                cout << "Budget Entering" << endl;
                cout << "Enter Budget: ";
                cin >> Budget;
                Budget_Entering(Products, Price, Budget);
                cout << "Choose: ";
                cin >> B_Choose;
                cout << "Quantity: ";
                cin >> B_Quantity;
                sum += UnitPrice(Price[B_Choose - 1], B_Quantity);
                break;

            default:
                cout << "Invalid Input" << endl;
                break;
        }

        cout << "<===============================================>" << endl;
        cout << "Current total: ₱" << fixed << setprecision(2) << sum << endl;
        cout << "Add more Product? (Y/N): ";
        cin >> A_Choose;

        if (A_Choose == 'n' || A_Choose == 'N') {
            break;
        }
        else if (A_Choose == 'y' || A_Choose == 'Y') {
            cout << "<===============================================>" << endl;
        }
        else {
            cout << "Invalid Input. Exiting program." << endl;
            break;
        }
    } while (A_Choose == 'y' || A_Choose == 'Y');

    cout << "<===============================================>" << endl;
    cout << "Final total: ₱" << fixed << setprecision(2) << sum << endl;
    return 0;
}
