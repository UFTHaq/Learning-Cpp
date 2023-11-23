/*
    SMART POINTERS
    =================================================================================
    Custom Deleters

    - Sometimes when we destroy a smart pointer we need more than to just destroy
      the object on the heap

    - These are special use-cases

    - C++ smart pointers allow you to provide custom deleters

    - Lots of way to achive this
        - Functions
        - Lambdas
        - Other. . .

    =================================================================================
    Custom Deleters - function

        void my_deleter(Some_Class *raw_pointer) {
            // your custom deleter code
            delete raw_pointer;
        }

        shared_ptr<Some_Class> ptr {new Some_Class{}, my_deleter};

    =================================================================================
    Custom Deleters - function

        void my_deleter(Test *ptr) {
            std::cout << "In my custom deleter" << std::endl;
            delete  ptr;
        }

        shared_ptr<Test> ptr {new Test{}, my_deleter};

    =================================================================================
    Custom Deleters - lambda

        shared_ptr<Test> ptr (new Test{100}, [] (Test *ptr) {
            std::cout << "\tUsing my custom deleter" << std::endl;
            delete ptr;
        });


*/