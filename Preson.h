class Person {
protected:
    string name;
    int age;
public:
    Person() : name(""), age(0) {}

    Person(const string &name, int age) : name(name), age(age) {}

    void set_name(const string &name) {
        this->name = name;
    }

    string get_name() const {
        return name;
    }

    void set_age(int age) {
        this->age = age;
    }

    int get_age() const {
        return age;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};