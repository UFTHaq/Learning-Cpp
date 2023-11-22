/*
    Deep Copy (Beneran Copy sebuah value dan ditempatkan di memory lain,
    Bukannya malah Referencing, Sehingga harusnya tidak dapat mengubah
    Data yang di copy)

    User-provided copy constructor

    - Create a copy of the pointed-to data

    - Each copy will have a pointer to unique storage in the heap

    - Deep copy when you have a raw pointer as a class data member

    ------------------------------------------------------------------------
    class Deep {
    private:
        int *data;
    public:
        Deep(int d);
        Deep(const Deep &source);
        ~Deep();
    };

    // Constructor
    Deep::Deep(int d) {
        data = new int;          // allocate storage
        *data = d;
    }

    // Deep Copy Constructor - cara 1
    Deep::Deep(const Deep &source) {
        data = new int;
        *data = *source.data;
        cout << "Copy Constructor - Deep" << endl;
    }

    // Deep copy constructor - cara 2
    Deep::Deep(const Deep &source) 
        : data(*source.data) {
            cout << "Copy Constructor - Deep" << endl;
    }
    
    // Deep copy constructor - Delegating Constructor - cara 3
    Deep::Deep(const Deep &source) 
        : Deep(*source.data) {
            cout << "Copy Constructor - Deep" << endl;
    }

    // Destructor
    Shallow::~Shallow() {
        delete data;             // free storage
        cout << "Destructor freeing data" << endl;
    }

    // Deep - a simple method that expects a copy
    void display_deep(Deep s) {
        cout << s.get_data_value() << endl;
    }

    ----------------------------------------------------------
    contoh:

    int main() {
        Deep obj1{100};
        display_deep(obj1);
        // obj1's data has been released!

        obj.set_data_value(1000);
        Deep obj2{obj1};
        cout << "Hello World" << endl;

        return 0;
    }

*/