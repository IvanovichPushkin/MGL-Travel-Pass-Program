#include <iostream>

using namespace std;

int main()
{
    string name, country;
    int age, vax;
    cout << "Input name\n";
    cin >> name;
    cout << "Input age\n";
    cin >> age;
    if(age < 12){
        goto rejection;
    }
    cout << "Input country\n";
    cin >> country;
    cout << "Are you vaccinated\n1 - Yes\n2 - No\n";
    cin >> vax;
    if(country == "Philippines"){
        goto approval;
    }
    else{
        switch (vax){
            case 1:
                approval:
                    cout << name << ", your travel pass has been approved.\n";
                    break;
            case 2:
                rejection:
                    cout << name << ", your travel pass has been rejected.\n";
                    break;
            default:
                cout << name << ", you provided invalid input.\n";
        }
    }
    return 0;
}
