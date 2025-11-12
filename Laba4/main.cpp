#include "LineSegment.h"

int main() {
    std::cout << "Вариант 5." << std::endl;
    std::cout << "Задача: Реализовать класс LineSegment." << std::endl;
    std::cout << "Поля: double x, double y (координаты начала и конца отрезка на координатной прямой)" << std::endl;
    std::cout << "Методы: Определить, попадает ли заданное число в отрезок. Результат должен быть типа bool." << std::endl;

    LineSegment obj;
    bool flag = 1;

    while (flag) {
      std::cout << "Список действий над объектом: " << std::endl;
      std::cout << "1. Создать объект. " << std::endl;
      std::cout << "2. Проверить попадает ли точка в диапазон. (тип точки int) " << std::endl;
      std::cout << "3. ++Object. (префикс) " << std::endl;
      std::cout << "4. Object++. (постфикс) " << std::endl;
      std::cout << "5. !Object. (длина отрезка) " << std::endl;
      std::cout << "6. Явное приведение типа int(). (вернуть целую часть от х)" << std::endl;
      std::cout << "7. Неявное приведенеи типа double(). (вернуть y)" << std::endl;
      std::cout << "8. Сложение отрезка с числом (Object + int) " << std::endl;
      std::cout << "9. Сложение числа с отрезком (int + Object) " << std::endl;
      std::cout << "10. Object > int d. (Проверка попадает ли число в диапазон) " << std::endl;

      int action = 0;
      std::cout << "Введите действие над объектом: ";
      std::cin >> action;

      switch (action) {
        case 1: {
          double x = 0, y = 0;
          std::cout << "Введите x: ";
          std::cin >> x;
          std::cout << "Введите x: ";
          std::cin >> y;
        } break;
        case 2: {} break;
        case 3: {} break;
        case 4: {} break;
        case 5: {} break;
        case 6: {} break;
        case 7: {} break;
        case 8: {} break;
        case 9: {} break;
        case 10: {} break;
        default: {
          std::cout << "Такого действия нет" << std::endl;
        }
      }
    }


    
    

}