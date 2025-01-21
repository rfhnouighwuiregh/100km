#include <iostream>
using namespace std;

void task1() {
    double distance, time;
    cout << "Введите расстояние до аэропорта (км): ";
    cin >> distance;
    cout << "Введите время, за которое нужно доехать (часы): ";
    cin >> time;

    if (time <= 0) {
        cout << "Время должно быть больше 0.\\n";
        return;
    }

    double speed = distance / time;
    cout << "Необходимая скорость: " << speed << " км/ч" << endl;
}
void task2() {
    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;

    cout << "Введите время начала поездки (часы, минуты, секунды): ";
    cin >> startHours >> startMinutes >> startSeconds;
    cout << "Введите время окончания поездки (часы, минуты, секунды): ";
    cin >> endHours >> endMinutes >> endSeconds;

    int startTimeInSeconds = startHours * 3600 + startMinutes * 60 + startSeconds;
    int endTimeInSeconds = endHours * 3600 + endMinutes * 60 + endSeconds;

    if (endTimeInSeconds <= startTimeInSeconds) {
        cout << "Время завершения должно быть больше времени начала.\\n";
        return;
    }

    int durationInSeconds = endTimeInSeconds - startTimeInSeconds;
    int durationInMinutes = durationInSeconds / 60;
    double cost = durationInMinutes * 2.0;

    cout << "Длительность поездки: " << durationInMinutes << " минут." << endl;
    cout << "Стоимость поездки: " << cost << " гривен." << endl;
}
void task3() {
    double distance, fuelConsumption, price1, price2, price3;

    cout << "Введите расстояние поездки (км): ";
    cin >> distance;
    cout << "Введите расход бензина на 100 км: ";
    cin >> fuelConsumption;
    cout << "Введите стоимость бензина (3 вида, через пробел): ";
    cin >> price1 >> price2 >> price3;

    double totalFuel = (distance / 100.0) * fuelConsumption;

    cout << "Сравнительная таблица стоимости поездки:" << endl;
    cout << "Вид бензина 1: " << totalFuel * price1 << " рублей" << endl;
    cout << "Вид бензина 2: " << totalFuel * price2 << " рублей" << endl;
    cout << "Вид бензина 3: " << totalFuel * price3 << " рублей" << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    do {
        cout << "\\nВыберите задание (1-3) или 0 для выхода: ";
        cin >> choice;

        switch (choice) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 0:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Некорректный выбор. Попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}
