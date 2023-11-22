/*
    Shallow Copy Constructor (Copy yang malah referencing, karena dia
    bisa mengubah data yang dia copy) 

    class Shallow {
    private:
        int *data;
    public:
        Shallow(int d);
        Shallow(const Shallow &source);
        ~Shallow();
    };

    // Constructor
    Shallow::Shallow(int d) {
        data = new int;          // allocate storage
        *data = d;
    }
    
    // Shallow copy constructor
    Shallow::Shallow(const Shallow &source) 
        : data(source.data) {
            cout << "Copy Constructor - Shallow" << endl;
    }

    // Destructor
    Shallow::~Shallow() {
        delete data;             // free storage
        cout << "Destructor freeing data" << endl;
    }
    ----------------------------------------------------------
    contoh:

    int main() {
        Shallow obj1{100};
        display_shallow(obj1);
        // obj1's data has been released!

        obj.set_data_value(1000);
        Shallow obj2{obj1};
        cout << "Hello World" << endl;

        return 0;
    }
*/