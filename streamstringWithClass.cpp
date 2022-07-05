#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    public:
    int a;
    int std;
    stringstream b;
    
    string last_name;
    string first_name;
    void set_age(int age){
        a=age;
    }
    void set_first_name(string FN){
        first_name=FN;
    }
    void set_last_name(string LN){
        last_name=LN;
    }
    void set_standard(int STD){
        std=STD;
    }
    int get_standard(){
        return std;
    }
    string get_last_name(){
        return last_name;
    }
    string get_first_name(){
        return first_name;
    }
    
    int get_age(){
        return a;
    }
    string to_string(){
        b << a << "," << first_name <<"," << last_name<< "," << std;
        return b.str();
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
