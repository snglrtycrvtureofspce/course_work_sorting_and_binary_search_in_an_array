#pragma once
/*
RegisterForm.h содержит панель регистрации пользователей
*/
public struct functions
{
	void swap(int& first, int& second) // функция обмена значениями между двумя элементами.
	// Чтобы обменять значения у ОРИГИНАЛОВ значений в main'е,
	// эта функция принимает ссылки на элементы, то есть константные
	// указатели на адреса элементов
	{
		int t = first;
		first = second;
		second = t;
	}
	void quickSort(int* m, int left, int right) // функция быстрой сортировки (рекурсивной или сортировки Хоара)
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
};