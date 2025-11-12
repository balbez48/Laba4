#include "LineSegment.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "Rus");
    std::cout << "Вариант 5." << std::endl;
    std::cout << "Задача: Реализовать класс LineSegment." << std::endl;
    std::cout << "Поля: double x, double y (координаты начала и конца отрезка на координатной прямой)" << std::endl;
    std::cout << "Методы: Определить, попадает ли заданное число в отрезок. Результат должен быть типа bool." << std::endl;
    std::cout << "Список действий над объектом: " << std::endl;
    std::cout << "1. Создать объект. " << std::endl;
    std::cout << "2. Проверить попадает ли точка в диапазон. (тип точки int) " << std::endl;
    std::cout << "3. ++Object. (префикс) " << std::endl;
    std::cout << "4. Object++. (постфикс) " << std::endl;
    std::cout << "5. !Object. (длина отрезка) " << std::endl;
    std::cout << "6. Явное приведение типа int(). (вернуть целую часть от х)" << std::endl;
    std::cout << "7. Неявное приведение типа double(). (вернуть y)" << std::endl;
    std::cout << "8. Сложение отрезка с числом (Object + int) " << std::endl;
    std::cout << "9. Сложение числа с отрезком (int + Object) " << std::endl;
    std::cout << "10. Object > int d. (Проверка попадает ли число в диапазон) " << std::endl;
    std::cout << "-1. Выход" << std::endl;

    LineSegment obj;
    bool flag = true;

    while (flag) {
        
        std::cout << "\nТекущий объект: " << obj << std::endl;
        int action = 0;
        std::cout << "Введите действие над объектом: ";
        std::cin >> action;

        if (action == -1) { break; }

        switch (action) {
     
          case 1: {
            double x = 0, y = 0;
            std::cout << "Введите x: ";
            std::cin >> x;
            std::cout << "Введите y: ";
            std::cin >> y;

            obj = LineSegment(x, y);
            std::cout << "Создан объект: " << obj << std::endl;
            break;
          }
          case 2: {
            int point = 0;
            std::cout << "Введите точку для проверки: ";
            std::cin >> point;
            bool result = obj.PointOnLine(point);
            std::cout << "Результат - " << std::boolalpha << result << std::endl;
            break;
          }
          case 3: {
            std::cout << ++obj << std::endl;
            break;
          }
          case 4: {
            std::cout << obj++ << std::endl;
            break;
          }
          case 5: {
            std::cout << "Длина отрезка: " << !obj << std::endl;
            break;
          }
          case 6: {
            std::cout << "Явное приведение к int: " << (int)obj  << std::endl;
            break;
          }
          case 7: {
            std::cout << "Неявное приведение к double: " << double(obj) << std::endl;
            break;
          }
          case 8: {
            int num = 0;
            std::cout << "Введите целое число для сложения: ";
            std::cin >> num;
            obj = obj + num;
            std::cout << obj << std::endl;
            break;
          }
          case 9: {
            int num = 0;
            std::cout << "Введите целое число для сложения: ";
            std::cin >> num;
            obj = num + obj;
            std::cout << obj << std::endl;
            break;
          }
          case 10: {
            int num = 0;
            std::cout << "Введите число для проверки: ";
            std::cin >> num;
            std::cout << (obj > num) << std::endl;
            break;
          }
          default: {
            std::cout << "Такого действия нет" << std::endl;
            break;
          }
        }
    }

    return 0;
}