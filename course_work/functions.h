#pragma once
#include <iostream>

#include "MainForm.h"
public struct functions
{
	void swap(int& first, int& second) // функци€ обмена значени€ми между двум€ элементами.
	// „тобы обмен€ть значени€ у ќ–»√»ЌјЋќ¬ значений в main'е,
	// эта функци€ принимает ссылки на элементы, то есть константные
	// указатели на адреса элементов
	{
		int t = first;
		first = second;
		second = t;
	}
	void quickSort(int* m, int left, int right) // функци€ быстрой сортировки (рекурсивной или сортировки ’оара)
	{
		int leftArrow = left, rightArrow = right, pivot = m[(left + right) / 2];
		do
		{
			while (m[rightArrow] > pivot)
			{
				rightArrow--;
			}
			while (m[leftArrow] < pivot)
			{
				leftArrow++;
			}
			if (leftArrow <= rightArrow)
			{
				swap(m[leftArrow], m[rightArrow]);
				leftArrow++;
				rightArrow--;
			}
		} while (rightArrow >= leftArrow);
		if (left < rightArrow)
		{
			quickSort(m, left, rightArrow);
		}
		if (leftArrow < right)
		{
			quickSort(m, leftArrow, right);
		}
	}
	int Search_Binary(int arr[], int left, int right, int key)
	{
		int midd = 0;
		while (1)
		{
			midd = (left + right) / 2;

			if (key < arr[midd])       // если искомое меньше значени€ в €чейке
				right = midd - 1;      // смещаем правую границу поиска
			else if (key > arr[midd])  // если искомое больше значени€ в €чейке
				left = midd + 1;    // смещаем левую границу поиска
			else                       // иначе (значени€ равны)
				return midd;           // функци€ возвращает индекс €чейки

			if (left > right)          // если границы сомкнулись 
				return -1;
		}
	}
};