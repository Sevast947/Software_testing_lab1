[![CI/CD GitHub Actions](https://github.com/seekerk/ctest/actions/workflows/test-action.yml/badge.svg)](https://github.com/seekerk/ctest/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/seekerk/ctest/badge.svg?branch=main)](https://coveralls.io/github/seekerk/ctest?branch=main)
[![Quality Gate](https://sonarcloud.io/api/project_badges/measure?project=seekerk_ctest&metric=alert_status)](https://sonarcloud.io/dashboard?id=seekerk_ctest)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=seekerk_ctest&metric=bugs)](https://sonarcloud.io/summary/new_code?id=seekerk_ctest)
[![Code smells](https://sonarcloud.io/api/project_badges/measure?project=seekerk_ctest&metric=code_smells)](https://sonarcloud.io/dashboard?id=seekerk_ctest)

# План тестирования

# Аттестационное тестирование

- Тест А1 (негативный)

  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=0, b=0, c=0
  - Ожидаемый результат:
    ```
    Вывод сообщения:
     "Не является квадратным уравнением!"
    ```

- Тест А2 (негативный)

  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с двумя аргументами
  - Ожидаемый результат:
    ```
    Вывод сообщения:
     "Аргументов функции должно быть три!"
    ```

- Тест А3 (положительный)
  - Начальное состояние: Открытый терминал
  - Действие: Пользователь запускает программу с аргументами a=2, b=3, c=1
  - Ожидаемый результат:
    ```
    Вывод сообщения:
     Вывод на экран двух чисел: -1.00, -0.50
    ```

# Блочное тестирование (функция sq_exq_roots)

<ol>
  <li>
    <h3>Тест Б1 (положительный)</h3>
    <ul>
      <li>Входные данные: a = 1, b = -3, c = 2</li>
      <li>Ожидаемый результат:
        1 корень = 2.0
        2 корень = 1.0
      </li>
    </ul>
  </li>

  <li>
    <h3>Тест Б2 (положительный)</h3>
    <ul>
      <li>Входные данные: a = 1, b = -2, c = 1
</li>
      <li>Ожидаемый результат:
        1 корень = 1.0
        2 корень = 1.0
      </li>
    </ul>
  </li>

  <li>
    <h3>Тест Б3 (положительный)</h3>
    <ul>
      <li>Входные данные: a = 1, b = 2, c = 3
</li>
      <li>Ожидаемый результат:
        1 корень = NAN
        2 корень = NAN
      </li>
    </ul>
  </li>

  <li>
    <h3>Тест Б4 (положительный)</h3>
    <ul>
      <li>Входные данные: a = 2, b = 4, c = 0
</li>
      <li>Ожидаемый результат:
        1 корень = 0.0
        2 корень = -2.0
      </li>
    </ul>
  </li>

  <li>
    <h3>Тест Б3 (положительный)</h3>
    <ul>
      <li>Входные данные: a = 10000, b = 50000, c = 100000
</li>
      <li>Ожидаемый результат:
        1 корень = NAN
        2 корень = NAN
      </li>
    </ul>
  </li>
</ol>

# Интеграционное тестирование:

<ol>
  <li>
    <h3>Тест И1</h3>
    <ul>
      <li>Методы: int fibonachi(int num), double sq_exq_roots(int a, int b, int c)</li>
      <li>Описание: Проверяем, можно ли использовать результаты работы функции fibonachi в функции sq_exq_roots</li>
      <li>Входные данные: 10, 1, 4</li>
      <li>Ожидаемый результат:
       1 корень = NAN
       2 корень = NAN 
       </li>
    </ul>	
  </li>
  
</ol>
