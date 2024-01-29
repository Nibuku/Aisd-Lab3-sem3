# Лабораторная работа по АиСДу №3, 3-ий семестр. Сортировки

## Задание №1

Реализовать алгоритмы сортировки для массивов целых чисел согласно своему варианту. 

Сортировки:
   1. Сортировка вставками
   2. Шейкерная сортировка
   3. Сортировка расческой

## Задание 2. 

Посчитать число сравнений и число копирований объектов для массивов длины 1 000, 2 000, 3 000, …, 10 000,  25000, 50000, 100000:

  а) в среднем (сгенерировать 100 случайных массивов и подсчитать средние значения);
  Примечание: при генерации случайных массивов настраивать зерно-seed
  
  б) для полностью отсортированного массива;
  
  в) для обратно отсортированного массива.
  
  По полученным данным построить графики, сравнить экспериментальные результаты с теорией, сделать выводы.
  Все графики приложены в документе .csv

## Дополнительные задания:

Измените функции так, чтобы они принимали в себя 2 итератора, указывающих на начало сортируемого диапазона, и конец сортируемого диапазона (подобно функциям из <algorithm>).