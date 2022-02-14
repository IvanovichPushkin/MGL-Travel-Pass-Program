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
    cout << "Input country\n";
    cin >> country;
    if(age >= 12){
        if(country == "Philippines"){
            goto approval;
            }
        else{
            cout << "Are you vaccinated\n1 - Yes\n2 - No\n";
            cin >> vax;
            switch (vax){
                case 1:
                    approval:
                        cout << name << ", your travel pass has been approved\n";
                        break;
                case 2:
                    goto rejection;
                    break;
                default:
                    cout << name << ", you provided invalid input.\n";
                }
            }
        }
    else{
        rejection:
            cout << name << ", your travel pass has been rejected.\n";
    }
    return 0;
}
