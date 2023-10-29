#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int attendence;
    float total_marks;
    void calculate_percentage(){
        cout << total_marks<<"%"<<endl;
    }
};

class bank_client{
    private:
        string name;
        int creadit_number;
        int cvv;
        int user_name;
        int password;
    public:
//         string name;
//         int creadit_number;
//         int cvv;
//         int user_name;
//         int password;
        void set_credit_card_number(int number){
            creadit_number = number;
        }
        void get_credit_card_number(){
            cout << creadit_number <<endl;
        }
};

int main()
{
    
    // Student a, b, c;
    // a.name = "Rohit";
    // a.attendence = 90;
    // a.total_marks = 69;
    // a.calculate_percentage();

    bank_client a, b, c;
    // a.name = "Rohit";
    // a.password = 123456;
    // a.cvv = 788;
    // a.creadit_number = 34723849;
    a.set_credit_card_number(123456789);

    return 0;
}
