#include <iostream>
using namespace std;

struct Phone {
    string brand = "iPhone";
    string model = "15 Pro Max";
    string color = "titanium blue";
    int storage_in_gb = 256;
    double screen_diagonal = 6.7;
    string operating_system = "IOS";
    int cameras_number = 3;
    int weight_grams = 221;
    double width_in_mm = 76.7;
    double height_in_mm = 159.9;
    string screen_material = "Ceramic Shield";
    string corpus_material = "aluminum and titanium";
    double battery_capacity_mah = 4.422;
};

struct Publication_Date {
    int day = 10;
    int month = 01;
    int year = 2012;
};

struct Fav_Book {
    string title = "The Fault in Our Stars";
    string author = "John Green";
    int pages = 313;
    string genre = "Young adult novel / realistic fiction";
    Publication_Date book_date;
    string language = "English";
    string publication_place = "United States";
};

struct Cat {
    string name = "Emma";
    double age = 1.5;
    string sex = "female";
    string eyes_color = "blue";
    string fur_color = "white and gray";
    string nose_color = "pink";
    string main_hobbys = "sleep and eat";
    string owners = "Ira (me) and Sveta";
    string tail_color = "gray";
};

int main()
{
    // Для телефона

    Phone iphone;
    cout << "Brand: " << iphone.brand << "\n";
    cout << "Model: " << iphone.model << "\n";
    cout << "Color of the phone: " << iphone.color << "\n";
    cout << "Storage of the phone in gigabytes: " << iphone.storage_in_gb << "\n";
    cout << "Diagonal of the screen: " << iphone.screen_diagonal << "\n";
    cout << "Operating system: " << iphone.operating_system << "\n";
    cout << "Number of cameras that phone has: " << iphone.cameras_number << "\n";
    cout << "Weight of the phone in grams: " << iphone.weight_grams << "\n";
    cout << "Width of the phone in millimetres: " << iphone.width_in_mm << "\n";
    cout << "Height of the phone in millimetres: " << iphone.height_in_mm << "\n";
    cout << "Material from which the phone screen is made: " << iphone.screen_material << "\n";
    cout << "Materials from which the phone corpus is made: " << iphone.corpus_material << "\n";
    cout << "Battery capacity of the phone in mAh: " << iphone.battery_capacity_mah << "\n";
    cout << "\n";
    
    // Для книги

    Fav_Book book;
    cout << "The title of the book: " << book.title << "\n";
    cout << "The author of the book: " << book.author << "\n";
    cout << "Number of pages in the book: " << book.pages << "\n";
    cout << "Genre of the book: " << book.genre << "\n";
    cout << "Day of the book's publication: " << book.book_date.day << "\n";
    cout << "Month of the book's publication: " << book.book_date.month << "\n";
    cout << "Year of the book's publication: " << book.book_date.year << "\n";
    cout << "Language in which the book was written: " << book.language << "\n";
    cout << "Place of the publication of the book: " << book.publication_place << "\n";
    cout << "\n";
    
    // Для кошки

    Cat my_cat;
    cout << "The name of my cat: " << my_cat.name << "\n";
    cout << "The age of my cat: " << my_cat.age << "\n";
    cout << "The sex of my cat: " << my_cat.sex << "\n";
    cout << "Color of the eyes of my cat: " << my_cat.eyes_color << "\n";
    cout << "Color of the fur of my cat: " << my_cat.fur_color << "\n";
    cout << "Color of the nose of my cat: " << my_cat.nose_color << "\n";
    cout << "The main hobbys of my cat: " << my_cat.main_hobbys << "\n";
    cout << "The owners of my cat: " << my_cat.owners << "\n";
    cout << "Color of the tail of my cat: " << my_cat.tail_color;
    cout << "\n";

}

