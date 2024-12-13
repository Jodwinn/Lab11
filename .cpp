#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


struct Review {
private:
    string author;    
    string reviewtext; 
    int rating;       

public:
    Review(string a, string rText, int r) {
        author = a;
        reviewtext = rText;
        if (isValid(r)) {
            rating = r;
        }
        else {
            cout << "Неправильний рейтинг. Встановлено значення за замовчуванням - 1" << endl;
            rating = 1;
        }
    }

    bool isValid(int r) {
        return r >= 1 && r <= 5;
    }
    int convertrating() {
        return (rating * 100) / 5; 
    }
    void printReview() {
        cout << "Автор: " << author << endl;
        cout << "Текст відгуку: " << reviewtext << endl;
        cout << "Рейтинг: " << rating << " ("
            << convertrating() << "%)" << endl;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Review review1("Максим Павлович", "Чудовий товар", 5);
    Review review2("Олена Петрівна", "Якість відпаовідає ціні", 3);
    Review review3("Олег Іванович", "Поганий досвід, товар жахливої якості", 6); 
    cout << "Відгук 1:" << endl;
    review1.printReview();
    cout << "\nВідгук 2:" << endl;
    review2.printReview();
    cout << "\nВідгук 3:" << endl;
    review3.printReview();

    return 0;
}
